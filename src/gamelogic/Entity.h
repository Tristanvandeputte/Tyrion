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

enum class BulletType;
enum class Status;
class EntityFactory;



namespace ty {

class Entity {
	// TODO elke sfml klasse moet pointer naar zijn vector hebben
protected:
	Status status;
	// elke entity pointer naar EntityFactory(vb schip nr bullet) + zijn parent zodat sfml bullets safely geadd kunnen worden
	double radius{0};
	Vector position;
	Vector movement;
	double speed{0.01};
	int health;
	int damage;
	
public:
	Entity();
	virtual ~Entity();
	virtual void draw();
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
	Status getStatus();
	void decreaseHealth(int damage);
	virtual void collide(shared_ptr<Entity> with);
};

} /* namespace ty */



#endif /* ENTITY_H_ */
