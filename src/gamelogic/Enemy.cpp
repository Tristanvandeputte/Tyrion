/*
 * Enemy.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "Enemy.h"

namespace ty {

Enemy::Enemy() {
	// TODO Auto-generated constructor stub

}

Enemy::~Enemy() {
	// TODO Auto-generated destructor stub
}

Enemy::Enemy(Vector position,double speed ,int health, int damage,EnemyType type,EntityFactory* bullet_factory, Entity* parent):Entity(position,speed,health,damage),type(type),bullet_factory(bullet_factory),parent(parent){}

void Enemy::draw(){}

} /* namespace ty */

