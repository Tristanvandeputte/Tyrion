/*
 * PlayerFactory.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "EntityFactory.h"
namespace sfml{
EntityFactory::EntityFactory() {
	// TODO Auto-generated constructor stub

}

EntityFactory::~EntityFactory() {
	// TODO Auto-generated destructor stub
}

EntityFactory::EntityFactory(shared_ptr<RenderWindow> window):window(window){}

shared_ptr<ty::Entity> EntityFactory::makePlayer(double x, double y, std::string texturespot, ty::World* parent){
	Vector pos(0.0,0.0);
	shared_ptr<sfml::Player> p_ptr = make_shared<sfml::Player>(pos,texturespot,this, parent,window);
	return p_ptr;
}

shared_ptr<ty::Entity> EntityFactory::makeEnemy(double x, double y,EnemyType type,ty::World* parent){
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
	shared_ptr<sfml::Enemy> p_ptr = make_shared<sfml::Enemy>(pos,speed,health,damage,type,this,parent,window);
	return p_ptr;
}


shared_ptr<ty::Entity> EntityFactory::makeBullet(double x, double y,ty::BulletType type, ty::Status status ){
	string texturespot;
	if(type==ty::BulletType::BasicBullet){
		texturespot="SmallBullet.png";
	}
	Vector pos(x,y);
	//cout<<x<<"  "<<y<<endl;
	//created_bullets.push_back(p_ptr);
	return make_shared<sfml::Bullet>(pos,type,texturespot,status,window);
}

shared_ptr<ty::Entity> EntityFactory::makePowerup(Vector position,PowerupType p_type){
	return make_shared<sfml::Powerup>( position, p_type,window);
}

shared_ptr<ty::Entity> EntityFactory::makeBackground(std::string texturespot){
	return make_shared<sfml::Background>(texturespot,window);
}
}