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
using namespace sf;

namespace sfml {

class Bullet: public ty::Bullet {
private:
	static std::map<string,Texture> all_textures;
	shared_ptr<RenderWindow> window;
	std::string texture_location;
	sf::Texture this_tex;
	sf::Sprite sprite;
public:
	Bullet();
	Bullet(Vector position,BulletType type,std::string texture_location,Status status,shared_ptr<RenderWindow> window);
	virtual ~Bullet();
	void draw();
};

} /* namespace sfml */
#endif /* BULLET_H_ */
