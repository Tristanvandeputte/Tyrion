/*
 * PlayerFactory.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "PlayerFactory.h"

PlayerFactory::PlayerFactory() {
	// TODO Auto-generated constructor stub

}

PlayerFactory::~PlayerFactory() {
	// TODO Auto-generated destructor stub
}

shared_ptr<ty::Entity> PlayerFactory::make_Player(double x, double y, std::string texturespot,EntityFactory bullet_factory){
	shared_ptr<sfml::Player> p_ptr(new sfml::Player(x,y,texturespot,bullet_factory));
	return p_ptr;
}