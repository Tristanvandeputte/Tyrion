/*
 * Entity.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "Entity.h"

namespace ty {

Entity::Entity() {
	// TODO Auto-generated constructor stub

}

Entity::~Entity() {
	// TODO Auto-generated destructor stub
}

Entity::Entity(Vector position):position(position){}

Entity::Entity(Vector position,double speed ,int health, int damage):position(position),speed(speed),health(health),damage(damage){}

void Entity::draw(){
}
void Entity::move(Vector move){
	movement = movement+move;
}

double Entity::getX(){
	return position.getX();
}
double Entity::getSpeed(){
	return speed;
}
void Entity::update(double deltaT){
	position = position+(movement*deltaT*speed);
	if(invincibility_frame>0){
		invincibility_frame -= deltaT;
	}
	Vector nullmove(0,0);
	movement = nullmove;
}
double Entity::getY(){
	return position.getY();
}
double Entity::getRadius(){
	return radius;
}
Vector Entity::getPosition(){
	return position;
}
Status Entity::getStatus(){
	return status;
}

bool Entity::isDead(){
	return (health <= 0);
}

bool Entity::canShoot(){}
shared_ptr<Entity> Entity::Shoot(){}

void Entity::collide(shared_ptr<Entity> with){}

void Entity::decreaseHealth(int damage){
	if(invincibility_frame <=0){
		health -= damage;
		invincibility_frame = base_invincibility_frame;
	}
}

} /* namespace ty */

