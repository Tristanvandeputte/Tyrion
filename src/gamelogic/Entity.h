/*
 * Entity.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef ENTITY_H_
#define ENTITY_H_

#include <iostream>
#include <map>
#include "Vector.h"
#include <vector>
#include <utility>
#include <tuple>
#include <unistd.h>
#include <memory>

using namespace std;


namespace ty {


enum class BulletType;
enum class Status{Ally,Foe};
enum class BulletType{BasicBullet,SpecialBullet,BPBullet};
class EntityFactory;

class Entity {
	// bepaalde entities pointer naar EntityFactory(vb schip nr bullet) + zijn parent zodat sfml bullets safely geadd kunnen worden
protected:
	Status status=Status::Foe;
	double radius{0};
	Vector position{0,0};
	Vector movement{0,0};
	double speed{5.0};
	// bullets, for example, are immortal
	bool immortal{false};
	int health{1};
	int damage{1};
	double invincibility_frame{0};
	double base_invincibility_frame{0};
	int points_worth{0};
public:
	Entity();
	virtual ~Entity();
	virtual void draw();
	void recievePowerUp(shared_ptr<Entity> power_up);
	Entity(Vector position);
	Entity(Vector position,double speed ,int health, int damage);
	void move(Vector move);
	virtual shared_ptr<Entity> Shoot();
	double getX();
	double getSpeed();
	double getY();
	virtual void update(double deltaT);  // object-specific behaviour
	double getRadius();
	virtual bool canShoot();
	Vector getPosition();
	void setPosition(Vector new_pos);
	Status getStatus();
	bool getImmortal();
	void decreaseHealth(int damage);
	virtual void collide(shared_ptr<Entity> with);
	bool isDead();
	int getPoints();
	virtual void obtainPowerup(int hp, double spd, double scd,BulletType new_gun);
};

} /* namespace ty */



#endif /* ENTITY_H_ */
