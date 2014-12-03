/*
 * BulletFactory.cpp
 *
 *  Created on: Nov 17, 2014
 *      Author: uauser
 */

#include "BackgroundFactory.h"

BackgroundFactory::BackgroundFactory() {
	// TODO Auto-generated constructor stub

}

BackgroundFactory::~BackgroundFactory() {
	// TODO Auto-generated destructor stub
}


BackgroundFactory::BackgroundFactory(shared_ptr<RenderWindow> window):window(window){
	
}

shared_ptr<ty::Entity> BackgroundFactory::makeBackground(vector<string> texture_spots){
	shared_ptr<sfml::Background> p_ptr = make_shared<sfml::Background>(texture_spots,window);
	return p_ptr;
}