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

EntityPtr EntityFactory::makePlayer(double x, double y, std::string texturespot,EntityFactory* bullet_factory,Entity* parent){}
EntityPtr EntityFactory::makeBullet(double x, double y, BulletType type,Status status){}
EntityPtr EntityFactory::makeEnemy(double x, double y, BulletType type,Status status,EntityFactory* bullet_factory,Entity* parent){}
