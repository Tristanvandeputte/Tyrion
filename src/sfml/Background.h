/*
 * Bullet.h
 *
 *  Created on: Nov 25, 2014
 *      Author: uauser
 */

#ifndef SFMLBACKGROUND_H_
#define SFMLBACKGROUND_H_

#include "../gamelogic/EntityFactory.h"
#include "../gamelogic/Background.h"
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

namespace sfml {

class Background: public ty::Background {
private:
	static std::map<string,Texture> all_textures;
	shared_ptr<RenderWindow> window;
	sf::Texture this_tex;
	sf::Sprite sprite;
public:
	Background();
	Background(vector<string> texture_spots);
	virtual ~Bullet();
	void draw();
};

} /* namespace sfml */
#endif /* SFMLBACKGROUND_H_ */
