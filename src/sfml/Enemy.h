/*
 * Enemy.h
 *
 *  Created on: Nov 25, 2014
 *      Author: uauser
 */

#ifndef SFMLENEMY_H_
#define SFMLENEMY_H_

#include "../gamelogic/Enemy.h"
#include <SFML/Graphics.hpp>
#include <memory>

namespace sfml {

class Enemy: public ty::Enemy {
private:
	shared_ptr<sf::RenderWindow> window;
public:
	Enemy();
	Enemy(double x,double y,double speed ,int health, int damage,EnemyType type);
	virtual ~Enemy();
};

} /* namespace sfml */
#endif /* ENEMY_H_ */

