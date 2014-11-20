/*
 * BulletFactory.h
 *
 *  Created on: Nov 17, 2014
 *      Author: uauser
 */

#ifndef BULLETFACTORY_H_
#define BULLETFACTORY_H_

#include "EntityFactory.h"
#include "Entity.h"
#include "Bullet.h"
#include <memory>
#include <SFML/Graphics.hpp>
using namespace std;
enum class BulletType;
enum class Status;
namespace sfml{
	class Bullet;
}
class BulletFactory : public EntityFactory {
private: 
	vector<shared_ptr<sfml::Bullet> > created_bullets;
public:
	BulletFactory();
	virtual ~BulletFactory();
	shared_ptr<sfml::Bullet> makeBullet(double x, double y,BulletType type,Status status);
};

#endif /* BULLETFACTORY_H_ */
