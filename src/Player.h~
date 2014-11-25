/*
 * Player.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include "Entity.h"
#include "PlayerFactory.h"
#include "Bullet.h"
#include <iostream>
#include <math.h>
#include <memory>
#include <unistd.h>
using namespace sf;
using namespace std;
class PlayerFactory;
namespace ty {

class Player: public Entity {
protected:
	shared_ptr<PlayerFactory> p_fac;
	BulletType b_type;
public:
	Player();
	Player(double x,double y);
	virtual ~Player();
	virtual sf::Sprite draw();
	BulletType Shoot();
};

} /* namespace ty */

namespace sfml {

class Player: public ty::Player {
protected:
	std::map<string,Texture> all_textures; // voor animaties hier n vector v textures v maken
	Texture this_tex;
	string texture_location; //imageedit_1_7403900101.png
public:
	Player();
	Player(double x,double y, string texture_location);
	virtual ~Player();
	sf::Sprite draw() override;

};

} /* namespace sfml */
#endif /* PLAYER_H_ */

