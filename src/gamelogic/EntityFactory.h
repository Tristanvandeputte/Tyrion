/*
 * EntityFactory.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef ENTITYFACTORY_H_
#define ENTITYFACTORY_H_

#include <memory>
#include <unistd.h>
#include "World.h"

using namespace ty;

enum class BulletType;
enum class Status;
enum class EnemyType;

using namespace std;


class EntityFactory {
public:
	EntityFactory();
	virtual ~EntityFactory();
	virtual shared_ptr<ty::Entity> makePlayer(double x, double y, std::string texturespot,EntityFactory* bullet_factory,Entity* parent);
	virtual shared_ptr<ty::Entity> makeBullet(double x, double y, BulletType type,Status status);
	virtual shared_ptr<ty::Entity> makeEnemy(double x, double y,EnemyType type, EntityFactory* bullet_factory,Entity* parent);
	virtual shared_ptr<ty::Entity> makeBackground(std::string texturespot);
};

#endif /* ENTITYFACTORY_H_ */
