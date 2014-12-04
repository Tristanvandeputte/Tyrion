/*
 * Bullet.cpp
 *
 *  Created on: Nov 25, 2014
 *      Author: uauser
 */
#include "Background.h"

namespace sfml {

Background::Background() {
	// TODO Auto-generated constructor stub

}

Background::Background(string texture_spot,shared_ptr<RenderWindow> window):ty::Background(texture_spot),window(window){
	position = Vector(0,0);
	sf::Texture texture;
	speed = 10;
	char cwd[1024];
	getcwd(cwd,sizeof(cwd));
	string curdir(cwd);
	if (!texture.loadFromFile(curdir+"/Remastered Tyrian Graphics/"+texture_spot)){ //sla het pad op in de objecten, niet de textures.
		cout<<"ERROR IS KILL"<<endl;
	}
	texture.setSmooth(true); //smooth
	all_textures[texture_spot]=texture;
	sf::Sprite bg_sprite;
	bg_sprite.setTexture(all_textures[texture_spot]);
	sprite = bg_sprite;
}

Background::~Background() {
	// TODO Auto-generated destructor stub
}
void Background::draw(){
	sprite.setPosition(sf::Vector2f((position.getX()*80.0), (-1.0*position.getY()*80.0)+240.0));
	window->draw(sprite);
}

void Background::update(double deltaT){
	ty::Background::update(deltaT);
	//Vector2f move(1.0f*deltaT, 1.0f*deltaT);
	//sprite.move(move);
}

} /* namespace sfml */
