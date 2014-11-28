/*
 * Player.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include "Entity.h"
#include "EntityFactory.h"
#include "Bullet.h"
#include <iostream>
#include <math.h>
#include <memory>

using namespace std;
namespace ty {

class Player: public Entity {
protected:
	shared_ptr<EntityFactory> p_fac;
	BulletType b_type;
	Entity* parent;
	EntityFactory* bullet_factory;
	double shot_cool_down;
	double base_shot_cool_down;
public:
	Player();
	Player(Vector position,EntityFactory* bullet_factory,Entity* parent);
	virtual ~Player();
	virtual void draw();
	shared_ptr<Entity> Shoot();
	void move(Vector vec);
	void update(double deltaT);
	bool canShoot();
};

} /* namespace ty */



#endif /* PLAYER_H_ */