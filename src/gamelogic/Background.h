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
	vector<string> texture_positions;
public:
	Background();
	Background(vector<string> texture_positions);
	virtual ~Background();
	virtual void draw();
};

} /* namespace ty */



#endif /* BACKGROUND_H_ */
