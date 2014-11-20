/*
 * EnemyFactory.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef ENEMYFACTORY_H_
#define ENEMYFACTORY_H_

#include "EntityFactory.h"
#include "Enemy.h" 
#include <stdlib.h>
#include <time.h> 
#include <memory>
#include <SFML/Graphics.hpp>

namespace sfml{
	class Enemy;
}
//class enum EnemyType ;

class EnemyFactory: public EntityFactory {
public:
	EnemyFactory();
	virtual ~EnemyFactory();
	shared_ptr<sfml::Enemy> makeEntity();
};

#endif /* ENEMYFACTORY_H_ */
