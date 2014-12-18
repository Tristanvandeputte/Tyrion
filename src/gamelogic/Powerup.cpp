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


Powerup::Powerup(Vector position,PowerupType p_type):Entity(position),p_type(p_type){
	speed = 5;
	immortal=true;
	status = Status::Foe; //They need to collide with the player
}
void Powerup::update(double deltaT){
	Vector mov(0,-1*speed*deltaT);
	move(mov);
	position=position+(movement);
	movement = Vector(0,0);
}

void Powerup::collide(shared_ptr<Entity> with){
	with->decreaseHealth(damage);
	immortal=true;
}
} /* namespace ty */
