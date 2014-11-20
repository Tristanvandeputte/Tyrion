/*
 * World.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */




#ifndef WORLD_H_
#define WORLD_H_

#include "Entity.h"
#include "Enemy.h"
#include "PlayerFactory.h"
#include "BulletFactory.h"
#include "Bullet.h"
#include <vector>
#include <unistd.h>

enum class BulletType;
enum class Status;

using EntityPtr = shared_ptr<ty::Entity>;

namespace ty {

class World: public Entity {
private:
	std::vector<EntityPtr> all_entities;
	PlayerFactory p_fac;
	BulletFactory b_fac;
	EntityPtr current_player;
public:
	World();
	virtual ~World();
	std::vector<EntityPtr> getEntities();
	void startPlayer();
	EntityPtr getCurrentPlayer();
	void makeBullet(double x,double y,BulletType type,Status status);
	void movePlayerRight(double amount);
	void movePlayerLeft(double amount);
	void movePlayerUp(double amount);
	void movePlayerDown(double amount);
	void moveEntity(double amount);
	void checkOutOfBounds();
	void update(double deltaT); //collision checks etc, gamelogic
	void collisionCheck();
	void createNewEnemy();
};

} /* namespace ty */

#endif /* WORLD_H_ */
