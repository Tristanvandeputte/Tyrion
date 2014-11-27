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

using namespace sf;
using namespace std;

namespace sfml {

class Player: public ty::Player {
private:
	static std::map<string,Texture> all_textures; // voor animaties hier n vector v textures v maken
	Texture this_tex;
	shared_ptr<RenderWindow> window;
	string texture_location; //imageedit_1_7403900101.png
public:
	Player();
	Player(Vector position, string texture_location, EntityFactory* bullet_factory, Entity* parent,shared_ptr<RenderWindow> window);
	virtual ~Player();
	void draw() override;

};

} /* namespace sfml */
#endif /* PLAYER_H_ */

