/*
 * EnemyFactory.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "EnemyFactory.h"

EnemyFactory::EnemyFactory() {
	// TODO Auto-generated constructor stub

}
EnemyFactory::EnemyFactory(shared_ptr<RenderWindow> window):window(window){}

EnemyFactory::~EnemyFactory() {
	// TODO Auto-generated destructor stub
}


shared_ptr<Entity> EnemyFactory::makeEnemy(double x, double y,EnemyType type, EntityFactory* bullet_factory,World* parent){
	srand (time(NULL));
	double radius{0};
	double speed;
	int health;
	int damage;
	//choosing a random enemy -> map with enemydata??
	int enemy_nr = rand() % 1; //# enemies die er zijn
	switch(type){
	   case EnemyType::BasicEnemy :
		  health = 2;
		  damage = 1;
		  speed = 0.5;
	      break;
	   case EnemyType::ShootingEnemy :
		  health = 2;
		  damage = 1;
		  speed = 0.1;
	   }

	Vector pos(x,y);
	shared_ptr<sfml::Enemy> p_ptr = make_shared<sfml::Enemy>(pos,speed,health,damage,type,bullet_factory,parent,window);
	return p_ptr;
	
}