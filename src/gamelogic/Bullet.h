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

namespace ty {

enum class Status;

class Bullet: public Entity {
protected:
	//BulletFactory b_fac;
	BulletType type = BulletType::BasicBullet;
	Status status = Status::Foe;
public:
	Bullet();
	Bullet(Vector position,BulletType type,Status status);
	virtual ~Bullet();
	void update(double deltaT) override;
	virtual void draw();
	void collide(shared_ptr<Entity> with) override;
};

} /* namespace ty */



#endif /* BULLET_H_ */