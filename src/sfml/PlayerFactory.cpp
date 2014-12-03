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

PlayerFactory::PlayerFactory(shared_ptr<RenderWindow> window):window(window){}

EntityPtr PlayerFactory::makePlayer(double x, double y, std::string texturespot,EntityFactory* bullet_factory, ty::World* parent){
	Vector pos(x,y);
	shared_ptr<sfml::Player> p_ptr = make_shared<sfml::Player>(pos,texturespot,bullet_factory, parent,window);
	return p_ptr;
}