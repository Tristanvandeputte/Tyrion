/*
 * Player.cpp
 *
 *  Created on: Nov 25, 2014
 *      Author: uauser
 */

#include "Player.h"

namespace sfml {

Player::Player() {
	// TODO Auto-generated constructor stub

}

Player::Player(double x,double y, string texture_location):ty::Player(x,y),texture_location(texture_location){
	//cout<<"FUKKKK"<<endl;
	sf::Texture texture;
	char cwd[1024];
	getcwd(cwd,sizeof(cwd));
	string curdir(cwd);
	if (!texture.loadFromFile(curdir+"/Remastered Tyrian Graphics/"+texture_location)){ //sla het pad op in de objecten, niet de textures.
		cout<<"ERROR IS KILL"<<endl;
	}
	//cout<<curdir+"/Remastered Tyrian Graphics/"+texture_location<<endl;
	//texture.update(image); NODIG VR BEWEGING DENK K
	texture.setSmooth(true); //smooth
	all_textures[texture_location]=texture;
	this_tex=texture;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

void Player::draw(){
	sf::Sprite sprite;
	sprite.setTexture(all_textures[texture_location]);
	sprite.setPosition(sf::Vector2f((x_pos*80.0)+320.0-(sprite.getGlobalBounds().width/4), (-1.0*y_pos*80.0)+240.0-(sprite.getGlobalBounds().height/4)));
	sprite.scale(sf::Vector2f(0.7f, 0.7f));
	if(radius==0){
		radius = std::max((sprite.getGlobalBounds().width/2)/80,(sprite.getGlobalBounds().height/2)/80);
	}
	window->draw(sprite);
}

} /* namespace sfml */
