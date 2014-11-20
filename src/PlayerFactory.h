/*
 * PlayerFactory.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef PLAYERFACTORY_H_
#define PLAYERFACTORY_H_

#include "EntityFactory.h"
#include "Entity.h"
#include "Player.h"
#include <memory>
#include <SFML/Graphics.hpp>
using namespace std;
namespace sfml{
	class Player;
}
class PlayerFactory: public EntityFactory {
public:
	PlayerFactory();
	virtual ~PlayerFactory();
	shared_ptr<sfml::Player> make_Player(double x, double y, std::string texturespot);
};

#endif /* PLAYERFACTORY_H_ */
