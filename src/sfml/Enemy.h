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
using namespace sf;

namespace sfml {

class Enemy: public ty::Enemy {
private:
	static std::map<string,Texture> all_textures;
	shared_ptr<RenderWindow> window;
	string texture_location;
public:
	Enemy();
	Enemy(Vector position,double speed ,int health, int damage,EnemyType type, EntityFactory* bullet_factory, World* parent ,shared_ptr<RenderWindow> window);
	virtual ~Enemy();
	void draw() override;
};

} /* namespace sfml */
#endif /* ENEMY_H_ */

