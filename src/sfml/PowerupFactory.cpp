/*
 * PowerupFactory.cpp
 *
 *  Created on: Dec 12, 2014
 *      Author: uauser
 */

#include "PowerupFactory.h"

PowerupFactory::PowerupFactory() {
	// TODO Auto-generated constructor stub

}

PowerupFactory(shared_ptr<RenderWindow> window):window(window){}

PowerupFactory::~PowerupFactory() {
	// TODO Auto-generated destructor stub
}

shared_ptr<ty::Entity> PowerupFactory::makePowerup(Vector position,PowerupType p_type){
	
}