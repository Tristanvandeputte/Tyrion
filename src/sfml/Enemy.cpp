/*
 * Enemy.cpp
 *
 *  Created on: Nov 25, 2014
 *      Author: uauser
 */

#include "Enemy.h"

namespace sfml {


Enemy::Enemy() {
	// TODO Auto-generated constructor stub

}

Enemy::~Enemy() {
	// TODO Auto-generated destructor stub
}

Enemy::Enemy(double x,double y,double speed ,int health, int damage,EnemyType type):ty::Enemy(x,y,speed,health,damage,type){}


} /* namespace sfml */
