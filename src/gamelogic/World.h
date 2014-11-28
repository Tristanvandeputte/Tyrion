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
#include <utility>
#include <tuple>
#include <unistd.h>

enum class EnemyType;
using EntityPtr = shared_ptr<ty::Entity>;
using Enemyvec = std::vector<std::tuple<double,EnemyType,double,double> >;
										//time, enemytype, x, y


namespace ty {

class World: public Entity {
private:
	vector<EntityPtr> all_entities; //world specific
	//all the Entiies is this game world
	EntityFactory* p_fac;;
	//Player Factory
	EntityFactory* b_fac;
	//Bullet Factory
	EntityFactory* e_fac;
	//Entity Factory
	EntityPtr current_player;
	//A pointer to the current player
	Enemyvec all_enemy_creations;
	//vector that specifies time and enemytype of all the enemies in this world
	double game_time{0};
public:
	World();
	World(EntityFactory* p_fac,EntityFactory* b_fac,EntityFactory* e_fac, Enemyvec all_enemy_creations);
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
	void createNewEnemy(EnemyType type,double x,double y);
	void draw();
	void playerShoots();
};

} /* namespace ty */

#endif /* WORLD_H_ */
