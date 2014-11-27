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

Player::Player(Vector position,EntityFactory* bullet_factory,Entity* parent):Entity(position),bullet_factory(bullet_factory),parent(parent){
	b_type = BulletType::BasicBullet;
	speed = 5.0;
}

void Player::draw(){
	cout<<"vvvv"<<endl;
}

BulletType Player::Shoot(){
	return b_type;
}

} /* namespace ty */


