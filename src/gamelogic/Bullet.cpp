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

Bullet::Bullet(double x,double y,BulletType type,Status status):Entity(x,y),type(type),status(status){
	speed = 0.5;
}

void Bullet::move(double deltaT){
	if(status==Status::Enemy){
		moveDown(speed*deltaT);
	}
	else{
		moveUp(speed*deltaT);
	}
}

} /* namespace ty */

