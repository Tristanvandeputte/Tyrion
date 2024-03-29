/*
 * BulletFactory.h
 *
 *  Created on: Nov 17, 2014
 *      Author: uauser
 */

#ifndef BULLETFACTORY_H_
#define BULLETFACTORY_H_

#include "../gamelogic/EntityFactory.h"
#include "../gamelogic/Entity.h"
#include "Bullet.h"
#include <memory>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
enum class BulletType;
enum class Status;
namespace sfml{
	class Bullet;
}
class BulletFactory : public EntityFactory {
private: 
	shared_ptr<RenderWindow> window;
	vector<shared_ptr<sfml::Bullet> > created_bullets;
public:
	BulletFactory();
	BulletFactory(shared_ptr<RenderWindow> window);
	virtual ~BulletFactory();
};

#endif /* BULLETFACTORY_H_ */
