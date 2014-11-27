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
void Entity::move(double deltaT){}

double Entity::getX(){
	return position.getX();
}
double Entity::getSpeed(){
	return speed;
}
void Entity::update(double deltaT){
	position = position+movement*deltaT*speed;
}
double Entity::getY(){
	return position.getY();
}
double Entity::getRadius(){
	return radius;
}

 BulletType Entity::Shoot(){}

} /* namespace ty */

