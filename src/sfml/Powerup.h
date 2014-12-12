/*
 * Powerup.h
 *
 *  Created on: Dec 12, 2014
 *      Author: uauser
 */

#ifndef SFMLPOWERUP_H_
#define SFMLPOWERUP_H_

#include "../gamelogic/Powerup.h"
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

namespace sfml {

class Powerup : public ty::Powerup {
public:
	Powerup();
	virtual ~Powerup();
};

} /* namespace sfml */

#endif /* POWERUP_H_ */
