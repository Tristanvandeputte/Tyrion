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
#include "EntityFactory.h"
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
	//all the Entiies is this game world
	EntityFactory* p_fac;;
	//Player Factory
	EntityFactory* b_fac;
	//Bullet Factory
	EntityFactory* e_fac;
	//Entity Factory
	EntityPtr current_player;
	//A pointer to the current player
public:
	World();
	World(EntityFactory* p_fac,EntityFactory* b_fac,EntityFactory* e_fac);
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
	void draw();
};

} /* namespace ty */

#endif /* WORLD_H_ */
