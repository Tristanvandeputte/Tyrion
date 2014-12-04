/*
 * Bullet.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef BACKGROUND_H_
#define BACKGROUND_H_

#include "Entity.h"
#include "EntityFactory.h"
#include <iostream>
#include <memory>
#include <unistd.h>

namespace ty {

class Background: public Entity {
protected:
	string texture_spot;
public:
	Background();
	Background(string texture_spot);
	virtual ~Background();
	virtual void draw();
	virtual void update(double deltaT);
};

} /* namespace ty */



#endif /* BACKGROUND_H_ */
