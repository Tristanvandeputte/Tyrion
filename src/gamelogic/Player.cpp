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

Player::Player(double x,double y):Entity(x,y){
	b_type = BulletType::BasicBullet;
	speed = 0.12;
}

void Player::draw(){}

BulletType Player::Shoot(){
	return b_type;
}

} /* namespace ty */


