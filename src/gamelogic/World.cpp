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

World::World(EntityFactory* p_fac,EntityFactory* b_fac,EntityFactory* e_fac, Enemyvec all_enemy_creations,EntityFactory* ba_fac):p_fac(p_fac),b_fac(b_fac),e_fac(e_fac),all_enemy_creations(all_enemy_creations),ba_fac(ba_fac){}

World::~World() {
	// TODO Auto-generated destructor stub
}

std::vector<EntityPtr> World::getEntities(){
	return ally_entities;
}

void World::startPlayer(){
	current_player = p_fac->makePlayer(0.0,0.0,"imageedit_1_7403900101.png",b_fac,this);
	ally_entities.push_back(current_player);
}

EntityPtr World::getCurrentPlayer(){
	return current_player;
}

void World::makeBullet(double x,double y,BulletType type,Status status){
	if(status == Status::Ally){
		ally_entities.push_back(b_fac->makeBullet(x,y,type, status));
	}
	if(status == Status::Ally){
		enemy_entities.push_back(b_fac->makeBullet(x,y,type, status));
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
			e_ptr = enemy_entities.erase(e_ptr);
		}
		else{
			++e_ptr;
		}
	}
}

void World::setBackground(vector<string> texture_locations){
	background = ba_fac->makeBackground(texture_locations);
}

void World::update(double deltaT){
	game_time +=deltaT;

	std::vector<std::tuple<EnemyType,double,double> > create;
	std::vector<int> to_be_deleted;

	background->update(deltaT);

	checkOutOfBounds();
	collisionCheck();

	for (auto to_be_created = all_enemy_creations.begin(); to_be_created != all_enemy_creations.end() ;){
		if (game_time>=get<0>(*to_be_created)){
			createNewEnemy(get<1>(*to_be_created),get<2>(*to_be_created),get<3>(*to_be_created));
			to_be_created = all_enemy_creations.erase(to_be_created);
		}
		else{
			++to_be_created;
		}
	}
	//deleting created enemies

	for(EntityPtr e_ptr : ally_entities){
		e_ptr->update(deltaT); // deltaT = ???
	}
	for(EntityPtr e_ptr : enemy_entities){
		e_ptr->update(deltaT); // deltaT = ???
	}
	checkDead();
}

void World::createNewEnemy(EnemyType type,double x,double y){
	EntityPtr one = e_fac->makeEnemy(x,y,type,b_fac,this);
	cout<<"made dummy"<<endl;
	enemy_entities.push_back(one);
}

void World::draw(){
	background->draw();
	for(EntityPtr e_ptr : enemy_entities){
			e_ptr->draw();
	}
	for(EntityPtr e_ptr : ally_entities){
		if(e_ptr != current_player){
			e_ptr->draw();
		}
	}
	current_player->draw();
}

void World::playerShoots(){
	if(current_player->canShoot()){
		EntityPtr one = current_player->Shoot();
		ally_entities.push_back(one);
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
	return (current_player->isDead());
}

}/* namespace ty */














