/*
 * World.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "World.h"

namespace ty {

World::World() {
	// TODO Auto-generated constructor stub

}

World::World(EntityFactory* e_fac, Enemyvec all_enemy_creations):e_fac(e_fac),all_enemy_creations(all_enemy_creations){
	reset_all_enemy_creations = all_enemy_creations;
}

World::~World() {
	// TODO Auto-generated destructor stub
}

std::vector<EntityPtr> World::getEntities(){
	return ally_entities;
}

void World::startPlayer(){
	current_player = e_fac->makePlayer(0.0,0.0,"Player.png",this);
	ally_entities.push_back(current_player);
}

EntityPtr World::getCurrentPlayer(){
	return current_player;
}

void World::makeBullet(double x,double y,BulletType type,Status status){
	if(status == Status::Ally){
		ally_entities.push_back(e_fac->makeBullet(x,y,type, status));
	}
	if(status == Status::Ally){
		enemy_entities.push_back(e_fac->makeBullet(x,y,type, status));
	}

}

void World::checkOutOfBounds(){
	for (auto e_ptr = ally_entities.begin(); e_ptr != ally_entities.end() ;){
		if ((*e_ptr)->getX() > 7 || (*e_ptr)->getX() < -7 || (*e_ptr)->getY() > 6 || (*e_ptr)->getY()< -6  ){
			e_ptr = ally_entities.erase(e_ptr);
		}
		else{
			++e_ptr;
		}
	}
	for (auto e_ptr = enemy_entities.begin(); e_ptr != enemy_entities.end() ;){
		if ((*e_ptr)->getX() > 7 || (*e_ptr)->getX() < -7 || (*e_ptr)->getY() > 6 || (*e_ptr)->getY()< -6  ){
			e_ptr = enemy_entities.erase(e_ptr);
		}
		else{
			++e_ptr;
		}
	}
}

void World::checkDead(){
	for (auto e_ptr = ally_entities.begin(); e_ptr != ally_entities.end() ;){
		if ((*e_ptr)->isDead()){
			e_ptr = ally_entities.erase(e_ptr);
		}
		else{
			++e_ptr;
		}
	}
	for (auto e_ptr = enemy_entities.begin(); e_ptr != enemy_entities.end() ;){
		if ((*e_ptr)->isDead()){
			score += (*e_ptr)->getPoints();
			e_ptr = enemy_entities.erase(e_ptr);
		}
		else{
			++e_ptr;
		}
	}
}

void World::setBackground(vector<string> texture_locations){
	//EntityPtr bg = ba_fac->makeBackground(texture_locations);
	background_spots = texture_locations;
}

void World::backgroundPositionCheck(){
	if(background_tiles.empty()){
		EntityPtr bg = e_fac->makeBackground(background_spots[0]);
		Vector initial_bg_spot(0,9);
		bg->setPosition(initial_bg_spot);
		background_tiles.push_back(bg);
		texturecounter ++;
	}
	if(background_tiles[0]->getPosition().getY()<3 && background_tiles.size()<2){
		if(texturecounter>=background_spots.size()){
			texturecounter=0;
		}
		EntityPtr bg = e_fac->makeBackground(background_spots[texturecounter]);
		Vector bg_spot(0,background_tiles[0]->getPosition().getY()+12);
		bg->setPosition(bg_spot);
		// deze moet setpos op X vorige
		background_tiles.push_back(bg);
	}

	//cout<<"0:  "<<background_tiles[0]->getPosition().getY()<<endl;
	//cout<<background_tiles[0]->getPosition().getY()<<endl;
	if(background_tiles[0]->getPosition().getY()<-3 || background_tiles[0]->getPosition().getY()>100){
		background_tiles.erase(background_tiles.begin());
	}
	if(background_tiles.size()>1){
		//cout<<"1:  "<<background_tiles[1]->getPosition().getY()<<endl;
		if(background_tiles[1]->getPosition().getY()<-3 || background_tiles[1]->getPosition().getY()>100){
			background_tiles.erase(background_tiles.begin()+1);
		}
	}
}

void World::update(double deltaT){
	game_time +=deltaT;

	std::vector<std::tuple<::EnemyType,double,double> > create;
	std::vector<int> to_be_deleted;

	for(auto& background : background_tiles){
		background->update(deltaT);
	}

	checkOutOfBounds();
	collisionCheck();

	for (auto to_be_created = all_enemy_creations.begin(); to_be_created != all_enemy_creations.end();){
		if (game_time>=get<0>(*to_be_created)){
			createNewEnemy(get<1>(*to_be_created),get<2>(*to_be_created),get<3>(*to_be_created));
			to_be_created = all_enemy_creations.erase(to_be_created);
		}
		else{
			++to_be_created;
		}
	}
	for (auto to_be_created = all_powerups.begin(); to_be_created != all_powerups.end();){
		if (game_time>=get<0>(*to_be_created)){
			//createNewEnemy(get<1>(*to_be_created),get<2>(*to_be_created),get<3>(*to_be_created));
			to_be_created = all_powerups.erase(to_be_created);
		}
		else{
			++to_be_created;
		}
	}

	for(EntityPtr e_ptr : ally_entities){
		e_ptr->update(deltaT);
	}
	for(EntityPtr e_ptr : enemy_entities){
		if(e_ptr !=0){
			e_ptr->update(deltaT);
		}
	}
	checkDead();
	backgroundPositionCheck();
}

void spawnPowerUp(PowerupType type, double x, double y){

}
void World::createNewEnemy(::EnemyType type,double x,double y){
	EntityPtr one = e_fac->makeEnemy(x,y,type,this);
	enemy_entities.push_back(one);
}

void World::draw(){
	for(auto background : background_tiles){
		background->draw();
	}
	for(EntityPtr e_ptr : enemy_entities){
		e_ptr->draw();
	}
	for(EntityPtr e_ptr : ally_entities){
		if(e_ptr.get() == nullptr){
		}
		if(e_ptr != current_player){
			e_ptr->draw();
		}
	}
	current_player->draw();
}

void World::playerShoots(){
	if(current_player->canShoot()){
		ally_entities.push_back(current_player->Shoot());
	}
}

void World::collisionCheck(){
	for(EntityPtr e_ptr : ally_entities){
		for(EntityPtr e_ptr2 : enemy_entities){
			double x1 = e_ptr->getPosition().getX();
			double y1 = e_ptr->getPosition().getY();
			double x2 = e_ptr2->getPosition().getX();
			double y2 = e_ptr2->getPosition().getY();
			double radius1 = e_ptr->getRadius();
			double radius2 = e_ptr2->getRadius();

			//compare the distance to combined radii
			double dx = x2 - x1;
			double dy = y2 - y1;
			double radii = radius1 + radius2;
			if ( (( dx * dx )  + ( dy * dy )) < (radii * radii) ) {
				e_ptr->collide(e_ptr2);
				e_ptr2->collide(e_ptr);
			}
		}
	}
}

bool World::checkGameEnd(){
	if(current_player->isDead()){
		texturecounter=0;
	}
	return (current_player->isDead());
}

void World::push_to_vector(shared_ptr<Entity> bullet){
	enemy_entities.push_back(bullet);
}

void World::reset(){
	all_enemy_creations = reset_all_enemy_creations;
	ally_entities.clear();
	enemy_entities.clear();
	background_tiles.clear();
	current_player = nullptr;
	texturecounter = 0;
	game_time = 0;
	score = 0;
}
void World::changeLevel(Enemyvec enemy_creations,vector<string> texture_locs){
	all_enemy_creations = enemy_creations;
	reset_all_enemy_creations = enemy_creations;
	background_spots = texture_locs;
	reset();
}

}/* namespace ty */
