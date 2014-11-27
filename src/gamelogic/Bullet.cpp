/*
 * Bullet.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "Bullet.h"

namespace ty {

Bullet::Bullet() {
	// TODO Auto-generated constructor stub

}

Bullet::~Bullet() {
	// TODO Auto-generated destructor stub
}

void Bullet::draw(){}

Bullet::Bullet(Vector position,BulletType type,Status status):Entity(position),type(type),status(status){
	speed = 0.5;
}
void Bullet::update(double deltaT){
	if(status == Status::Enemy){
		Vector mov(0,-1);
		move(mov);
	}
	else{
		Vector mov(0,1);
		move(mov);
	}
}

} /* namespace ty */

