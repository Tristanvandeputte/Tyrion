/*
 * Enemy.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef ENEMY_H_
#define ENEMY_H_

#include "Entity.h"#include "Entity.h"
#include "EnemyFactory.h"
#include "EntityFactory.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <memory>
#include <unistd.h>

class enum EnemyType{BasicEnemy,ShootingEnemy};

namespace ty {

class Enemy: public Entity {
private:
	//soort animationstate om aan te geven wanneer schieten/opzij moven
	EnemyType type;
	BulletType b_type;
public:
	Enemy();
	virtual ~Enemy();
};

} /* namespace ty */

namespace sfml {

class Enemy: public ty::Enemy {
	
public:
	Enemy();
	Enemy(double x,double y,double speed ,int health, int damage,EnemyType type);
	virtual ~Enemy();
};

} /* namespace sfml */
#endif /* ENEMY_H_ */

