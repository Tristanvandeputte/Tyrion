/*
 * PowerupFactory.h
 *
 *  Created on: Dec 12, 2014
 *      Author: uauser
 */

#ifndef POWERUPFACTORY_H_
#define POWERUPFACTORY_H_

#include "../gamelogic/EntityFactory.h"
#include "Powerup.h" 
#include <stdlib.h>
#include <time.h> 
#include <memory>
#include <SFML/Graphics.hpp>
using namespace sf;
namespace sfml{
	class Powerup;
}

class PowerupFactory : public EntityFactory{
private:
	shared_ptr<RenderWindow> window;
public:
	PowerupFactory();
	PowerupFactory(shared_ptr<RenderWindow> window);
	virtual ~PowerupFactory();
	shared_ptr<ty::Entity> makePowerup(Vector position,PowerupType p_type);
};

#endif /* POWERUPFACTORY_H_ */
