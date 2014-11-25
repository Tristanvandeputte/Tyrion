/*
 * Bullet.h
 *
 *  Created on: Nov 25, 2014
 *      Author: uauser
 */

#ifndef SFMLBULLET_H_
#define SFMLBULLET_H_

#include "../gamelogic/EntityFactory.h"
#include "../gamelogic/Bullet.h"
#include <SFML/Graphics.hpp>

namespace sfml {

class Bullet: public ty::Bullet {
private:
	shared_ptr<sf::RenderWindow> window;
	std::string texture_location;
	sf::Texture this_tex;
public:
	Bullet();
	Bullet(double x,double y,BulletType type,std::string texture_location,Status status);
	virtual ~Bullet();
	void draw();
};

} /* namespace sfml */
#endif /* BULLET_H_ */
