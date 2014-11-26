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


shared_ptr<Entity> EnemyFactory::makeEnemy(double x, double y, BulletType type,Status status,EntityFactory* bullet_factory,Entity* parent){
	srand (time(NULL));
	double radius{0};
	double x_pos;
	double y_pos;
	double speed;
	int health;
	int damage;
	Entity* parentptr;
	EnemyType enemy_type;
	//choosing a random enemy -> map with enemydata??
	int enemy_nr = rand() % 1; //# enemies die er zijn
	switch(enemy_nr){
	   case 0 :
		  y_pos = 4.5;
		  x_pos = (rand() % 6) - 3;
		  health = 2;
		  damage = 1;
		  speed = 0.1;
		  enemy_type = EnemyType::BasicEnemy;
		  parentptr=parent;
	      break;
	   case 1 :
		   cout<<"kekek"<<endl;
	   case 2 :
	      cout << "Well done" << endl;
	      break;
	   case 3 :
	      cout << "You passed" << endl;
	      break;
	   case 4 :
	      cout << "Better try again" << endl;
	      break;
	   default :
	      cout << "Invalid enemy" << endl;
	   }
	shared_ptr<sfml::Enemy> p_ptr(new sfml::Enemy(x_pos,y_pos,speed , health, damage,enemy_type,bullet_factory,parentptr,window));
	return p_ptr;
	
}