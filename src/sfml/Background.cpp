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

Background::Background(vector<string> texture_spots,shared_ptr<RenderWindow> window):ty::Background(texture_spots),window(window){
	position = Vector(0,0);
	sf::Texture texture;
	char cwd[1024];
	getcwd(cwd,sizeof(cwd));
	string curdir(cwd);
	if (!texture.loadFromFile(curdir+"/Remastered Tyrian Graphics/"+texture_spots[0])){ //sla het pad op in de objecten, niet de textures.
		cout<<"ERROR IS KILL"<<endl;
	}
	texture.setSmooth(true); //smooth
	all_textures[texture_spots[0]]=texture;
	sf::Sprite bg_sprite;
	bg_sprite.setTexture(all_textures[texture_spots[0]]);
	bg_sprite.setPosition(sf::Vector2f((position.getX()*80.0)+320.0-(sprite.getGlobalBounds().width/4), (-1.0*position.getY()*80.0)+240.0-(sprite.getGlobalBounds().height/4)));
	sprite = bg_sprite;
}

Background::~Background() {
	// TODO Auto-generated destructor stub
}
void Background::draw(){
	sprite.setPosition(sf::Vector2f((position.getX()*80.0)+320.0-(sprite.getGlobalBounds().width/4), (-1.0*position.getY()*80.0)+240.0-(sprite.getGlobalBounds().height/4)));
	window->draw(sprite);
}

void Background::update(double deltaT){
	//Vector2f move(1.0f*deltaT, 1.0f*deltaT);
	//sprite.move(move);
	Vector mov(0,-0,5*speed*deltaT);
	move(mov);
	position=position+(movement);
	movement = Vector(0,0);
}

} /* namespace sfml */
