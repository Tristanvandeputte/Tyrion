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
	return all_entities;
}

void World::startPlayer(){
	current_player = p_fac->makePlayer(0.0,0.0,"imageedit_1_7403900101.png",b_fac,this);
	all_entities.push_back(current_player);
}

EntityPtr World::getCurrentPlayer(){
	return current_player;
}

void World::makeBullet(double x,double y,BulletType type,Status status){
	all_entities.push_back(b_fac->makeBullet(x,y,type, status));
}

void World::checkOutOfBounds(){
	std::vector<int> to_be_deleted;
	int count = 0;
	for(EntityPtr e_ptr : all_entities){
		if(e_ptr->getX()>5 || e_ptr->getX()<-5 || e_ptr->getY()>4 || e_ptr->getY()<-4 ){
			to_be_deleted.push_back(count);
		}
		count++;
	}
	for(int i : to_be_deleted){
		all_entities.erase(all_entities.begin()+i);
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

	int count=0;
	for(auto& to_be_created : all_enemy_creations){
		if(game_time>=get<0>(to_be_created)){
			createNewEnemy(get<1>(to_be_created),get<2>(to_be_created),get<3>(to_be_created));
			to_be_deleted.push_back(count);
		}
		count++;
	}

	//random enemy generation
	for(int i : to_be_deleted){
		all_enemy_creations.erase(all_enemy_creations.begin());
		//enemies zitten geordend in lijst
	}
	//deleting created enemies

	for(EntityPtr e_ptr : all_entities){
		e_ptr->update(deltaT); // deltaT = ???
	}
	checkOutOfBounds();
	collisionCheck();
}

void World::createNewEnemy(EnemyType type,double x,double y){
	EntityPtr one = e_fac->makeEnemy(x,y,type,b_fac,this);
	cout<<"made dummy"<<endl;
	all_entities.push_back(one);
}

void World::draw(){
	background->draw();
	for(EntityPtr e_ptr : all_entities){
		if(e_ptr != current_player){
			e_ptr->draw();
		}
	}
	current_player->draw();
}

void World::playerShoots(){
	if(current_player->canShoot()){
		EntityPtr one = current_player->Shoot();
		all_entities.push_back(one);
	}
}

void World::collisionCheck(){
	for(EntityPtr e_ptr : all_entities){
		int count=0;
		if(e_ptr->getStatus() == Status::Ally){
			//cout<<count<<endl;

			//cout<<"ally.x: "<<e_ptr->getPosition().getX()<<endl;
			//cout<<"ally.y: "<<e_ptr->getPosition().getY()<<endl;
			count++;
			for(EntityPtr e_ptr2 : all_entities){
				if(e_ptr2->getStatus() == Status::Enemy){
					
					double x1 = e_ptr->getPosition().getX();  //collision
					double y1 = e_ptr->getPosition().getY();
					double x2 = e_ptr2->getPosition().getX();
					double y2 = e_ptr2->getPosition().getY();
					//cout<<"enemy.x: "<<x2<<endl;
					//cout<<"enemy.y: "<<y2<<endl;
					
					double radius1 = e_ptr->getRadius();
					double radius2 = e_ptr2->getRadius();

					//compare the distance to combined radii
					double dx = x2 - x1;
					double dy = y2 - y1;
					double radii = radius1 + radius2;
					//cout<<( dx * dx )  + ( dy * dy )<<endl;
					//cout<<radii*radii<<endl;
					if ( (( dx * dx )  + ( dy * dy )) < (radii * radii) ) {
						cout<<"player has been hit!!"<<endl;
						e_ptr->collide(e_ptr2);
						e_ptr2->collide(e_ptr);
					}
				}
			}
		}
	}
} 

}/* namespace ty */














