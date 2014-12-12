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
private:
	shared_ptr<RenderWindow> window;
public:
	Powerup();
	Powerup(Vector position,PowerupType p_type,shared_ptr<RenderWindow> window);
	virtual ~Powerup();
	void draw();
};

} /* namespace sfml */

#endif /* POWERUP_H_ */
