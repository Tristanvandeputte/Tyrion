/*
 * PlayerFactory.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef PLAYERFACTORY_H_
#define PLAYERFACTORY_H_

#include "../gamelogic/EntityFactory.h"
#include "../gamelogic/Entity.h"
#include "Player.h"
#include "Background.h"
#include "Enemy.h"
#include "Powerup.h"
#include "Bullet.h"
#include <memory>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
namespace ty{
class Player;
class Bullet;
class Powerup;
class Background;
enum class Status;
}

namespace sfml{

class EntityFactory: public ty::EntityFactory {
private:
	shared_ptr<RenderWindow> window;
public:
	EntityFactory();
	EntityFactory(shared_ptr<RenderWindow> window);
	virtual ~EntityFactory();
	shared_ptr<ty::Entity> makePlayer(double x, double y, std::string texturespot, ty::World* parent) override;
	shared_ptr<ty::Entity> makeBackground(std::string texturespot);
	shared_ptr<ty::Entity> makeEnemy(double x, double y,EnemyType type,ty::World* parent);
	shared_ptr<ty::Entity> makePowerup(Vector position,PowerupType p_type);
	shared_ptr<ty::Entity> makeBullet(double x, double y,ty::BulletType type,ty::Status status);
};
}

#endif /* PLAYERFACTORY_H_ */
