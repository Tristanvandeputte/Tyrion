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
	vector<string> texture_spots;
public:
	Background();
	Background(vector<string> texture_spots,shared_ptr<RenderWindow> window);
	virtual ~Background();
	void draw();
	void update(double deltaT) override;
};

} /* namespace sfml */
#endif /* SFMLBACKGROUND_H_ */
