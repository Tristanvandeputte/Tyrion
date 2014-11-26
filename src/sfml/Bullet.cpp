/*
 * Bullet.cpp
 *
 *  Created on: Nov 25, 2014
 *      Author: uauser
 */
#include "Bullet.h"

namespace sfml {

Bullet::Bullet() {
	// TODO Auto-generated constructor stub

}

Bullet::Bullet(double x,double y,BulletType type,std::string texture_location,Status status,shared_ptr<RenderWindow> window):ty::Bullet(x,y,type,status),texture_location(texture_location),window(window){
	sf::Texture texture;
	char cwd[1024];
	getcwd(cwd,sizeof(cwd));
	string curdir(cwd);
	if (!texture.loadFromFile(curdir+"/Remastered Tyrian Graphics/"+texture_location)){ //sla het pad op in de objecten, niet de textures.
		cout<<"ERROR IS KILL"<<endl;
	}
	//texture.update(image); NODIG VR BEWEGING DENK K
	texture.setSmooth(true); //smooth
	this_tex=texture;
}

Bullet::~Bullet() {
	// TODO Auto-generated destructor stub
}
void Bullet::draw(){
		sf::Sprite sprite;
		sprite.setTexture(this_tex);
		sprite.setPosition(sf::Vector2f((x_pos*80.0)+320.0-(sprite.getGlobalBounds().width/4), (-1.0*y_pos*80.0)+240.0-(sprite.getGlobalBounds().height/4)));
		sprite.scale(sf::Vector2f(0.7f, 0.7f));
		window->draw(sprite);
}

} /* namespace sfml */
