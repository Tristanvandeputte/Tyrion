/*
 * Powerup.cpp
 *
 *  Created on: Dec 12, 2014
 *      Author: uauser
 */

#include "Powerup.h"

std::map<string,Texture> sfml::Powerup::all_textures = {};

namespace sfml {

Powerup::Powerup() {
}

Powerup::Powerup(Vector position,PowerupType p_type,shared_ptr<RenderWindow> window):ty::Powerup(position,p_type),window(window){
	// TODO Auto-generated constructor stub
	sf::Texture texture;
	char cwd[1024];
	getcwd(cwd,sizeof(cwd));
	string curdir(cwd);
	if(p_type == PowerupType::BetterBullet){
		texture_location="MovingEnemy.png";
	}
	if(p_type == PowerupType::MoreHealth){
		texture_location="MovingEnemy.png";
	}
	if(p_type == PowerupType::MoreSpeed){
		texture_location="MovingEnemy.png";
	}
	if(p_type == PowerupType::ShootCooldownReduction){
		cout<<"a"<<endl;
		texture_location="MovingEnemy.png";
	}
	if (!texture.loadFromFile(curdir+"/Remastered Tyrian Graphics/"+texture_location)){ //sla het pad op in de objecten, niet de textures.
		cout<<"ERROR IS KILL"<<endl;
	}
	texture.setSmooth(true); //smooth
	all_textures[texture_location]=texture;
}

Powerup::~Powerup() {
	// TODO Auto-generated destructor stub
}

void Powerup::draw(){
	sprite.setPosition(sf::Vector2f((position.getX()*80.0)+320.0-(sprite.getGlobalBounds().width/4), (-1.0*position.getY()*80.0)+240.0-(sprite.getGlobalBounds().height/4)));
	window->draw(sprite);
}

} /* namespace sfml */
