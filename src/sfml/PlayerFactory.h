/*
 * PlayerFactory.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef PLAYERFACTORY_H_
#define PLAYERFACTORY_H_

#include "../gamelogic/EntityFactory.h"
#include "../gamelogic/Entity.h"
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
	EntityPtr makePlayer(double x, double y, std::string texturespot,EntityFactory bullet_factory) override;
};

#endif /* PLAYERFACTORY_H_ */
