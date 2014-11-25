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
	Status status;
	EnemyType type;
	BulletType b_type;
public:
	Enemy();
	Enemy(double x,double y,double speed ,int health, int damage,EnemyType type);
	virtual ~Enemy();
	virtual void draw();
};

} /* namespace ty */


#endif /* ENEMY_H_ */