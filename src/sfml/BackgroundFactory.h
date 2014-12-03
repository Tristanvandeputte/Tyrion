/*
 * BulletFactory.h
 *
 *  Created on: Nov 17, 2014
 *      Author: uauser
 */

#ifndef BACKGROUNDFACTORY_H_
#define BACKGROUNDFACTORY_H_

#include "../gamelogic/EntityFactory.h"
#include "../gamelogic/Entity.h"
#include "Background.h"
#include <memory>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
enum class BulletType;
enum class Status;
namespace sfml{
	class Bullet;
}
class BackgroundFactory : public EntityFactory {
private: 
	shared_ptr<RenderWindow> window;
public:
	BackgroundFactory();
	BackgroundFactory(shared_ptr<RenderWindow> window);
	virtual ~BackgroundFactory();
	shared_ptr<ty::Entity> makeBackground(vector<string> texture_spots);
};

#endif /* BACKGROUNDFACTORY_H_ */
