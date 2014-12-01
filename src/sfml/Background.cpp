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



Background::Background(vector<string> texture_spots):ty::Background(texture_spots){
	sf::Texture texture;
	char cwd[1024];
	getcwd(cwd,sizeof(cwd));
	string curdir(cwd);
	if (!texture.loadFromFile(curdir+"/Remastered Tyrian Graphics/"+texture_spots[0])){ //sla het pad op in de objecten, niet de textures.
		cout<<"ERROR IS KILL"<<endl;
	}
	//texture.update(image); NODIG VR BEWEGING DENK K
	texture.setSmooth(true); //smooth
	all_textures[texture_spots[0]]=texture;
	sprite.setTexture(all_textures[texture_spots[0]]);
	sprite.setPosition(sf::Vector2f((position.getX()*80.0)+320.0-(sprite.getGlobalBounds().width/4), (-1.0*position.getY()*80.0)+240.0-(sprite.getGlobalBounds().height/4)));
	sprite.scale(sf::Vector2f(2.0f, 2.0f));
}

Background::~Background() {
	// TODO Auto-generated destructor stub
}
void Background::draw(){
		//window->draw(sprite);
}

void Background::update(double deltaT){}

} /* namespace sfml */
