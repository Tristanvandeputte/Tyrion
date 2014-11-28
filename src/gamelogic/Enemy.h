/*
 * Enemy.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef ENEMY_H_
#define ENEMY_H_

#include "Entity.h"
#include "EntityFactory.h"
#include "Bullet.h"
#include <iostream>
#include <memory>
#include <unistd.h>

enum class EnemyType{BasicEnemy,ShootingEnemy};

namespace ty {

class Enemy: public Entity {
protected:
	//soort animationstate om aan te geven wanneer schieten/opzij moven
	EnemyType type;
	BulletType b_type;
	EntityFactory* bullet_factory;
	Entity* parent;
	double shot_cool_down;
	double base_shot_cool_down;
public:
	Enemy();
	Enemy(Vector position,double speed ,int health, int damage,EnemyType type,EntityFactory* bullet_factory, Entity* parent);
	virtual ~Enemy();
	virtual void draw();
	shared_ptr<Entity> Shoot();
	//void move(Vector vec);
	void update(double deltaT);
	bool canShoot();
};

} /* namespace ty */


#endif /* ENEMY_H_ */