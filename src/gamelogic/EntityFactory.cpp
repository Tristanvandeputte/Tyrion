/*
 * EntityFactory.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "EntityFactory.h"

EntityFactory::EntityFactory() {
	// TODO Auto-generated constructor stub

}

EntityFactory::~EntityFactory() {
	// TODO Auto-generated destructor stub
}

shared_ptr<ty::Entity> EntityFactory::makePlayer(double x, double y, std::string texturespot,EntityFactory* bullet_factory,Entity* parent){}
shared_ptr<ty::Entity> EntityFactory::makeBullet(double x, double y, BulletType type,Status status){}
shared_ptr<ty::Entity> EntityFactory::makeEnemy(double x, double y,EnemyType type, EntityFactory* bullet_factory,Entity* parent){}
shared_ptr<ty::Entity> EntityFactory::makeBackground(std::vector<std::string> texture_locations){}
