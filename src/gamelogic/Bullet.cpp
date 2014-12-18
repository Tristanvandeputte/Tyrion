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
	health = 1;
	if(type==BulletType::BasicBullet){
		health = 1; //bullet heeft 1 health (gaat kapot on-hit)
		speed = 5;
	}
	if(type==BulletType::SpecialBullet){
		health = 1; //bullet heeft 1 health (gaat kapot on-hit)
		speed = 8;
	}
	immortal=true;
}
void Bullet::update(double deltaT){
	if(status == Status::Foe){
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
	if(type==BulletType::BasicBullet || type==BulletType::SpecialBullet){
		damage=1;
	}
	if(with->getImmortal()==false){
		immortal=false;
		with->decreaseHealth(damage);
	}
	if(with->getImmortal()==true){
		//nothing
	}
	
}

} /* namespace ty */

