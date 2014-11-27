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

World::World(EntityFactory* p_fac,EntityFactory* b_fac,EntityFactory* e_fac, Enemyvec all_enemy_creations):p_fac(p_fac),b_fac(b_fac),e_fac(e_fac),all_enemy_creations(all_enemy_creations){}

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

void World::movePlayerRight(double amount){
	double real_amount=amount*current_player->getSpeed();
	if(not (current_player->getX()+0.05+current_player->getRadius()>4.0)){
		current_player->move(amount);
	}
}

void World::movePlayerLeft(double amount){
	if(not (current_player->getX()-0.05-current_player->getRadius()<-4.0)){
		current_player->move(amount);
	}
}

void World::movePlayerUp(double amount){
	if(not (current_player->getY()+0.05+current_player->getRadius()>3.0)){
		current_player->move(amount);
	}
}

void World::movePlayerDown(double amount){
	if(not (current_player->getY()-0.05-current_player->getRadius()<-3.0)){
		current_player->move(amount);
	}
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



void World::update(double deltaT){
	game_time +=deltaT;
	std::vector<std::tuple<EnemyType,double,double> > create;
	std::vector<int> to_be_deleted;
	
	int count=0;
	for(auto& to_be_created : all_enemy_creations){
		if(game_time>=get<0>(to_be_created)){
			createNewEnemy(get<1>(to_be_created),get<2>(to_be_created),get<3>(to_be_created));
		}
		count++;
	}

	//random enemy generation
	for(int i : to_be_deleted){
		all_enemy_creations.erase(all_enemy_creations.begin()+i);
	}
	//deleting created enemies
	
	for(EntityPtr e_ptr : all_entities){
		e_ptr->update(deltaT); // deltaT = ???
	}
	checkOutOfBounds();
}

void World::createNewEnemy(EnemyType type,double x,double y){
	//e_fac
}

void World::draw(){
	for(EntityPtr e_ptr : all_entities){
		if(e_ptr != current_player){
			e_ptr->draw();
		}
	}
	current_player->draw();
}

void collisionCheck(){
	//	for(EntityPtr e_ptr : all_entities){
	//		if()
	//		int x1 = 3;  //collision
	//		int y1 = 4;
	//		int x2 = 6;
	//		int y2 = 8;
	//		int radius1 = 3;
	//		int radius2 = 5;
	//
	//		//compare the distance to combined radii
	//		int dx = x2 - x1;
	//		int dy = y2 - y1;
	//		int radii = radius1 + radius2;
	//		if ( ( dx * dx )  + ( dy * dy ) < radii * radii ) 
	//		{
	//			cout<<"player has been hit!!"
	//		}
	//	}
}

} /* namespace ty */














