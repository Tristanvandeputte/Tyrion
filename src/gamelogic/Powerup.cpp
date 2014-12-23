/*
 * Powerup.cpp
 *
 *  Created on: Dec 12, 2014
 *      Author: uauser
 */

#include "Powerup.h"

namespace ty {

Powerup::Powerup() {
	// TODO Auto-generated constructor stub

}

Powerup::~Powerup() {
	// TODO Auto-generated destructor stub
}


void Powerup::draw(){}


Powerup::Powerup(Vector position,::PowerupType p_type):Entity(position),p_type(p_type){
	if(p_type == ::PowerupType::BetterBullet){
		new_bullet = BulletType::BasicBullet;
	}
	if(p_type == ::PowerupType::MoreHealth){
		health_increase = 1;
	}
	if(p_type == ::PowerupType::MoreSpeed){
		speed_increase = 1;
	}
	if(p_type == ::PowerupType::ShootCooldownReduction){
		bullet_cooldown_reduction = 0.2;
	}
	speed = 3;
	immortal=true;
	status = Status::Foe; //They need to collide with the player
}
void Powerup::update(double deltaT){
	Vector mov(0,-1);
	move(mov);
	position = position+(movement*deltaT*speed);
	Vector nullmove(0,0);
	movement = nullmove;
}

void Powerup::collide(shared_ptr<Entity> with){
	with->obtainPowerup(health_increase,speed_increase,bullet_cooldown_reduction,new_bullet);
	if(with->getImmortal()==false){
		immortal=false;
		health = 0;
	}
}
} /* namespace ty */
