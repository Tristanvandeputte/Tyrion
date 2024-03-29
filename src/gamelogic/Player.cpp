/*
 * Player.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "Player.h"

namespace ty {

Player::Player() {
	// TODO Auto-generated constructor stub

}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

Player::Player(Vector position,EntityFactory* bullet_factory,World* parent):Entity(position),bullet_factory(bullet_factory),parent(parent){
	b_type = BulletType::BasicBullet;
	shot_cool_down = 0;
	base_shot_cool_down = 1.0;
	status = Status::Ally;
	speed = 5.0;
	base_invincibility_frame = 2.0;
	health = 3;
}

void Player::draw(){}

void Player::obtainPowerup(int hp, double spd, double scd,BulletType new_gun){
	health += hp;
	cout<<scd<<endl;
	speed +=spd;
	base_shot_cool_down -= scd;
	if(base_shot_cool_down < 0){
		base_shot_cool_down = 0;
	}
	b_type = new_gun;
}

void Player::update(double deltaT){
	position = position+(movement*deltaT*speed);
	if(position.getX()+radius+0.05>4.0){
		position.setX(4.0-radius-0.05);
	}
	if(position.getX()-0.05<-4.0){
		position.setX(-4+0.05);
	}
	if(position.getY()-radius-0.05<-3.0){
		position.setY(-3+radius+0.05);
	}
	if(position.getY()+0.1>3.0){
		position.setY(3-0.05);
	}
	Vector nullmove(0,0);
	movement = nullmove;
	if(invincibility_frame>0){
		invincibility_frame -= deltaT;
	}
	if(shot_cool_down>=0){
		shot_cool_down-=5*deltaT;
	}
	//cout<<shot_cool_down<<endl;
}

bool Player::canShoot(){
	if(shot_cool_down<0){
		return true;
	}
	return false;
}

shared_ptr<Entity> Player::Shoot(){
	shot_cool_down=base_shot_cool_down;
	return bullet_factory->makeBullet(position.getX(),position.getY(),b_type,Status::Ally);
}
} /* namespace ty */


