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

PlayerFactory::PlayerFactory(shared_ptr<RenderWindow> window):window:(window){}

EntityPtr PlayerFactory::makePlayer(double x, double y, std::string texturespot,EntityFactory* bullet_factory, ty::Entity* parent){
	cout<<"makin playah"<<endl;
	shared_ptr<sfml::Player> p_ptr(new sfml::Player(x,y,texturespot,bullet_factory, parent));
	return p_ptr;
}