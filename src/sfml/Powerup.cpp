/*
 * Powerup.cpp
 *
 *  Created on: Dec 12, 2014
 *      Author: uauser
 */

#include "Powerup.h"

namespace sfml {

Powerup::Powerup() {
	// TODO Auto-generated constructor stub

}

Powerup::Powerup(Vector position,PowerupType p_type,shared_ptr<RenderWindow> window):ty::Powerup(position,p_type),window(window){}

Powerup::~Powerup() {
	// TODO Auto-generated destructor stub
}

void Powerup::draw(){}

} /* namespace sfml */
