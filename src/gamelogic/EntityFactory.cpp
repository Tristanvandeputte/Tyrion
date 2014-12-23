/*
 * EntityFactory.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "EntityFactory.h"

namespace ty{


EntityFactory::EntityFactory() {
	// TODO Auto-generated constructor stub

}

EntityFactory::~EntityFactory() {
	// TODO Auto-generated destructor stub
}

shared_ptr<Entity> EntityFactory::makePlayer(double x, double y, std::string texturespot,World* parent){}
shared_ptr<Entity> EntityFactory::makeBullet(double x, double y, BulletType type,Status status){}
shared_ptr<Entity> EntityFactory::makeEnemy(double x, double y,::EnemyType type,World* parent){}
shared_ptr<Entity> EntityFactory::makeBackground(std::string texturespot){}
shared_ptr<Entity> EntityFactory::makePowerup(Vector position,::PowerupType p_type){}
}
