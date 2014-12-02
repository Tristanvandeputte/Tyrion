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
	health = 1; //bullet heeft 1 health (gaat kapot on-hit of piercet eventueel)
	speed = 7;
}
void Bullet::update(double deltaT){
	if(status == Status::Enemy){
		Vector mov(0,-1*speed*deltaT);
		move(mov);
	}
	else if(status == Status::Ally){
		Vector mov(0,1*speed*deltaT);
		move(mov);
	}
	position=position+(movement);
	movement = Vector(0,0);
}

void Bullet::collide(shared_ptr<Entity> with){
	int damage=0;
	if(type==BulletType::BasicBullet){
		damage=1;
	}
	with->decreaseHealth(damage);
}

} /* namespace ty */

