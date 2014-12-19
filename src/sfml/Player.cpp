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

Player::Player(Vector position, string texture_location,ty::EntityFactory* bullet_factory,ty::World* parent,shared_ptr<RenderWindow> window):ty::Player(position,bullet_factory,parent),texture_location(texture_location),window(window){
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
	//sf::Sprite sprite;
	sprite.setTexture(all_textures[texture_location]);	if(radius==0){
		radius = std::max((sprite.getGlobalBounds().width/2)/80,(sprite.getGlobalBounds().height/2)/80);
	}
	sprite.scale(sf::Vector2f(0.7f, 0.7f));
	//cout<<"regplayer   "<<position.getX()<<"  "<<position.getY()<<endl;
	//cout<<"playersfml  "<<(position.getX()*80.0)+320.0-(sprite.getGlobalBounds().width/4)<<"    "<<(-1.0*position.getY()*80.0)+240.0-(sprite.getGlobalBounds().height/4)<<endl;	
	
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

void Player::draw(){
	sprite.setPosition(sf::Vector2f((position.getX()*80.0)+320.0-(sprite.getGlobalBounds().width/4), (-1.0*position.getY()*80.0)+240.0-(sprite.getGlobalBounds().height/4)));
	if(invincibility_frame>0){
		sprite.setColor(sf::Color(0, 255, 0, 200));
	}
	else{
		sprite.setColor(sf::Color(255, 255, 255, 200));
	}
	window->draw(sprite);
}

} /* namespace sfml */
