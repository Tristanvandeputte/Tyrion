/*
 * Bullet.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "Background.h"

namespace ty {

Background::Background() {
	// TODO Auto-generated constructor stub

}

Background::~Background() {
	// TODO Auto-generated destructor stub
}

void Background::draw(){}

Background::Background(string texture_spot):texture_spot(texture_spot){
	immortal=true;
	position = Vector{0,9};
}

void Background::update(double deltaT){
	Vector mov(0,-0.1*speed*deltaT);
	move(mov);
	position=position+(movement);
	movement = Vector(0,0);
}

} /* namespace ty */

