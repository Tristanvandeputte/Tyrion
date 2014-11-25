/*
 * Player.h
 *
 *  Created on: Nov 25, 2014
 *      Author: uauser
 */

#ifndef SFMLPLAYER_H_
#define SFMLPLAYER_H_

#include "../gamelogic/Player.h"
#include "../gamelogic/Entity.h"
#include "../gamelogic/EntityFactory.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <memory>
#include <unistd.h>

class World;

using namespace sf;
using namespace std;

namespace sfml {

class Player: public ty::Player {
private:
	std::map<string,Texture> all_textures; // voor animaties hier n vector v textures v maken
	Texture this_tex;
	shared_ptr<RenderWindow> window;
	string texture_location; //imageedit_1_7403900101.png
	EntityFactory bullet_factory;
	shared_ptr<Entity> parent_world; //?
public:
	Player();
	Player(double x,double y, string texture_location, EntityFactory bullet_factory);
	virtual ~Player();
	void draw();

};

} /* namespace sfml */
#endif /* PLAYER_H_ */

