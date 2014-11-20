/*
 * Entity.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef ENTITY_H_
#define ENTITY_H_

#include <SFML/Graphics.hpp>
#include <iostream>
#include <map>
using namespace std;

enum class BulletType;
enum class Status;


namespace ty {

class Entity {
	// TODO elke sfml klasse moet pointer naar zijn vector hebben
protected:
	// elke entity pointer naar EntityFactory(vb schip nr bullet) + zijn parent zodat sfml bullets safely geadd kunnen worden
	double radius{0};
	double x_pos;
	double y_pos;
	double speed{0.01};
	int health;
	int damage;
	
public:
	Entity();
	virtual ~Entity();
	virtual sf::Sprite draw();
	Entity(double x,double y);
	Entity(double x,double y,double speed ,int health, int damage);
	void moveRight(double amount);
	void moveLeft(double amount);
	void moveUp(double amount);
	void moveDown(double amount);
	virtual BulletType Shoot();
	double getX();
	double getY();
	double getRadius();
	virtual void move(double deltaT); // object-specific behaviour
};

} /* namespace ty */

#endif /* ENTITY_H_ */
