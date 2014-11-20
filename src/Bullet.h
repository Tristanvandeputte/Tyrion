/*
 * Bullet.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef BULLET_H_
#define BULLET_H_

#include "Entity.h"
#include "BulletFactory.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <memory>
#include <unistd.h>

enum class BulletType{BasicBullet,SpecialBullet,BPBullet};
enum class Status{Ally,Enemy};

namespace ty {

class Bullet: public Entity {
protected:
	//BulletFactory b_fac;
	BulletType type;
	Status status;
public:
	Bullet();
	Bullet(double x,double y,BulletType type,Status status);
	virtual ~Bullet();
	virtual sf::Sprite draw();
	void move(double deltaT);
};

} /* namespace ty */

namespace sfml {

class Bullet: public ty::Bullet {
private:
	std::string texture_location;
	sf::Texture this_tex;
public:
	Bullet();
	Bullet(double x,double y,BulletType type,std::string texture_location,Status status);
	virtual ~Bullet();
	virtual sf::Sprite draw();
};

} /* namespace sfml */
#endif /* BULLET_H_ */

