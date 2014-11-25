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
#include "Entity.h"

using EntityPtr = shared_ptr<ty::Entity>;

enum class BulletType;
enum class Status;

using namespace std;


class EntityFactory {
public:
	EntityFactory();
	virtual ~EntityFactory();
	virtual EntityPtr makePlayer(double x, double y, std::string texturespot,EntityFactory bullet_factory);
	EntityPtr makeBullet(double x, double y, BulletType type,Status status);
	EntityPtr makeEnemy(double x, double y, BulletType type,Status status,EntityFactory bullet_factory);
};

#endif /* ENTITYFACTORY_H_ */
