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
void Entity::recievePowerUp(shared_ptr<Entity> power_up){
	
}
int Entity::getPoints(){
	return points_worth;
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
void  Entity::setPosition(Vector new_pos){
	position = new_pos;
}
Status Entity::getStatus(){
	return status;
}
bool Entity::getImmortal(){
	return immortal;
}
void Entity::obtainPowerup(int hp, double spd, double scd,BulletType new_gun){}

bool Entity::isDead(){
	if(not immortal){
		return (health <= 0);
	}
	return false;
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

void push_to_vector(shared_ptr<Entity> bullet){}

} /* namespace ty */

