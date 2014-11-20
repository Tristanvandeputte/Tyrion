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

} /* namespace ty */

namespace sfml {

Enemy::Enemy(double x,double y,double speed ,int health, int damage,EnemyType type):x_pos(x),y_pos(y),speed(speed),health(health),damage(damage),type(type){}

Enemy::Enemy() {
	// TODO Auto-generated constructor stub

}

Enemy::~Enemy() {
	// TODO Auto-generated destructor stub
}

} /* namespace sfml */
