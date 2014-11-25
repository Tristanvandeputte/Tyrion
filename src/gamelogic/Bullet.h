/*
 * Bullet.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef BULLET_H_
#define BULLET_H_

#include "Entity.h"
#include "EntityFactory.h"
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
	virtual void draw();
	void move(double deltaT);
};

} /* namespace ty */



#endif /* BULLET_H_ */