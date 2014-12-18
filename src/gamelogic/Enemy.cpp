/*
 * Enemy.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "Enemy.h"

namespace ty {

Enemy::Enemy() {
	// TODO Auto-generated constructor stub

}

Enemy::~Enemy() {
	// TODO Auto-generated destructor stub
}

Enemy::Enemy(Vector position,double speed ,int health, int damage,EnemyType type,EntityFactory* bullet_factory, World* parent):Entity(position,speed,health,damage),type(type),bullet_factory(bullet_factory),parent(parent){
	shot_cool_down=5.0;
	base_shot_cool_down = 5.0;
	status = Status::Foe;
	if(type == EnemyType::BasicEnemy ){
		speed = 10;
	}
	if(type == EnemyType::ShootingEnemy ){
		speed = 10;
	}
}

void Enemy::draw(){}


void Enemy::collide(shared_ptr<Entity> with){
	with->decreaseHealth(damage); //touch damage of enemies is 1 standaard
}

shared_ptr<Entity> Enemy::Shoot(){
	shot_cool_down=base_shot_cool_down;
	return bullet_factory->makeBullet(position.getX(),position.getY(),b_type,Status::Foe);	
}

void Enemy::update(double deltaT){
	if(type == EnemyType::BasicEnemy){
		Vector basic_enemy_move(0,-1); 
		move(basic_enemy_move);
	}
	if(type == EnemyType::ShootingEnemy ){
		Vector basic_enemy_move(0,-5); 
		move(basic_enemy_move);
		if(canShoot()){
			EntityPtr one = Shoot();
			parent->push_to_vector(one);	
		}
	}
	position = position+(movement*deltaT*speed);

	Vector nullmove(0,0);
	movement = nullmove;
	if(shot_cool_down>0){
		shot_cool_down-=5*deltaT;
	}
}
bool Enemy::canShoot(){
	if(shot_cool_down<0){
		return true;
	}
	return false;
	//TODO move to entity?
}

} /* namespace ty */


