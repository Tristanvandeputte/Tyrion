/*
 * World.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */




#ifndef WORLD_H_
#define WORLD_H_

#include "Entity.h"
#include "Background.h"
#include "Enemy.h"
#include "Powerup.h"
#include "EntityFactory.h"
#include "Bullet.h"
#include <vector>
#include <utility>
#include <tuple>
#include <unistd.h>

enum class EnemyType;
using EntityPtr = shared_ptr<ty::Entity>;
using Enemyvec = std::vector<std::tuple<double,::EnemyType,double,double> >;
										//time, enemytype, x, y

enum class PowerupType;
using Powerupvec = std::vector<std::tuple<double,PowerupType,double,double> >;
										//time, enemytype, x, y



namespace ty {

class World: public Entity {
private:
	// players' score
	int score{0};
	// counts how many textures we've had already
	int texturecounter{0};
	vector<string> background_spots;
	vector<EntityPtr> background_tiles;
	//A pointer to the background entity
	vector<EntityPtr> ally_entities;
	vector<EntityPtr> enemy_entities;
	//all the Entiies is this game world
	EntityFactory* e_fac;
	//Entity Factory which makes all other entities
	EntityPtr current_player;
	//A pointer to the current player
	Enemyvec all_enemy_creations;
	Enemyvec reset_all_enemy_creations;
	//vector that specifies  spawn time and enemytype of all the enemies in this world
	Powerupvec all_powerups;
	Powerupvec reset_all_powerups;
	//vector that specifies  spawntime and enemytype of all the powerups in this world
	double game_time{0};
	// we store this for moving the player at the end
	double max_deltaT{0};
public:
	World();
	World(EntityFactory* e_fac, Enemyvec all_enemy_creations);
	virtual ~World();
	std::vector<EntityPtr> getEntities();
	void startPlayer();
	EntityPtr getCurrentPlayer();
	void makeBullet(double x,double y,BulletType type,Status status);
	void moveEntity(double amount);
	void checkOutOfBounds();
	void update(double deltaT); //collision checks etc, gamelogic
	void collisionCheck();
	void setBackground(vector<string> texture_locations);
	void createNewEnemy(::EnemyType type,double x,double y);
	void createNewPowerup(::PowerupType type,double x,double y);
	//void spawnPowerUp(::PowerupType type, double x, double y);
	void draw();
	void playerShoots();
	void checkDead();
	bool checkGameEnd();
	bool FinishedLevel();
	void push_to_vector(shared_ptr<Entity> bullet);
	void backgroundPositionCheck();
	int getScore();
	
	void reset();
	void changeLevel(Enemyvec enemy_creations,vector<string> texture_locs);
};

} /* namespace ty */

#endif /* WORLD_H_ */
