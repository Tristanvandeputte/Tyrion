/*
 * EnemyFactory.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef ENEMYFACTORY_H_
#define ENEMYFACTORY_H_

#include "../gamelogic/EntityFactory.h"
#include "Enemy.h" 
#include <stdlib.h>
#include <time.h> 
#include <memory>
#include <SFML/Graphics.hpp>
using namespace sf;
namespace sfml{
	class Enemy;
}
//class enum EnemyType ;

class EnemyFactory: public EntityFactory {
private:
	shared_ptr<RenderWindow> window;
public:
	EnemyFactory();
	EnemyFactory(shared_ptr<RenderWindow> window);
	virtual ~EnemyFactory();
	shared_ptr<sfml::Enemy> makeEntity(double x, double y, BulletType type,Status status,EntityFactory* bullet_factory,Entity* parent);
};

#endif /* ENEMYFACTORY_H_ */
