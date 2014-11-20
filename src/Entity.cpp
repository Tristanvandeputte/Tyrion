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

Entity::Entity(double x,double y):x_pos(x),y_pos(y){}

Entity::Entity(double x,double y,double speed ,int health, int damage):x_pos(x),y_pos(y),speed(speed),health(health),damage(damage){}

sf::Sprite Entity::draw(){}


void Entity::moveRight(double amount){
	x_pos += amount*speed;
}
void Entity::moveLeft(double amount){
	x_pos -= amount*speed;
}
void Entity::moveUp(double amount){
	y_pos += amount*speed;
}
void Entity::moveDown(double amount){
	y_pos -= amount*speed;
}
void Entity::move(double deltaT){}

double Entity::getX(){
	return x_pos;
}
double Entity::getY(){
	return y_pos;
}
double Entity::getRadius(){
	return radius;
}

 BulletType Entity::Shoot(){}

} /* namespace ty */

