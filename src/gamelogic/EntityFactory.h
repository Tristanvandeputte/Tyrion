/*
 * EntityFactory.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef ENTITYFACTORY_H_
#define ENTITYFACTORY_H_

#include <memory>
#include <vector>
#include <unistd.h>
#include "World.h"

enum class EnemyType;
enum class PowerupType;

namespace ty{

enum class BulletType;
enum class Status;
enum class PowerupType;

using namespace std;

class World;


class EntityFactory {
public:
	EntityFactory();
	virtual ~EntityFactory();
	virtual shared_ptr<Entity> makePlayer(double x, double y, std::string texturespot,World* parent);
	virtual shared_ptr<Entity> makeBullet(double x, double y, BulletType type,Status status);
	virtual shared_ptr<Entity> makeEnemy(double x, double y,::EnemyType type,World* parent);
	virtual shared_ptr<Entity> makeBackground(std::string texturespot);
	virtual shared_ptr<Entity> makePowerup(Vector position,::PowerupType p_type);
};
}

#endif /* ENTITYFACTORY_H_ */
