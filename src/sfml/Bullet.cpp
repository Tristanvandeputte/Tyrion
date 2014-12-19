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

Bullet::Bullet(Vector position,BulletType type,std::string texture_location,Status status,shared_ptr<RenderWindow> window):ty::Bullet(position,type,status),texture_location(texture_location),window(window){
	sf::Texture texture;
	texture_location="SmallBullet.png";
	char cwd[1024];
	getcwd(cwd,sizeof(cwd));
	string curdir(cwd);
	if(type==BulletType::BasicBullet){
		texture_location="SmallBullet.png";
	}
	if (!texture.loadFromFile(curdir+"/Remastered Tyrian Graphics/"+texture_location)){ //sla het pad op in de objecten, niet de textures.
		cout<<"ERROR IS KILL"<<endl;
	}
	//texture.update(image); NODIG VR BEWEGING DENK K
	texture.setSmooth(true); //smooth
	all_textures[texture_location]=texture;
	sf::Sprite isprite;
	isprite.setTexture(all_textures[texture_location]);
	isprite.setPosition(sf::Vector2f((position.getX()*80.0)+320.0-(sprite.getGlobalBounds().width/4), (-1.0*position.getY()*80.0)+240.0-(sprite.getGlobalBounds().height/4)));
	//cout<<"regbullet   "<<position.getX()<<"  "<<position.getY()<<endl;
	//cout<<"bulletsfml  "<<(position.getX()*80.0)+320.0-(sprite.getGlobalBounds().width/4)<<"    "<<(-1.0*position.getY()*80.0)+240.0-(sprite.getGlobalBounds().height/4)<<endl;	
	isprite.scale(sf::Vector2f(2.0f, 2.0f));	
	if(radius==0){
		radius = std::max((isprite.getGlobalBounds().width/2)/80,(isprite.getGlobalBounds().height/2)/80)+0.1;
	}
	sprite = isprite;
}

Bullet::~Bullet() {
	// TODO Auto-generated destructor stub
}
void Bullet::draw(){
	sprite.setPosition(sf::Vector2f((position.getX()*80.0)+320.0-(sprite.getGlobalBounds().width/4), (-1.0*position.getY()*80.0)+240.0-(sprite.getGlobalBounds().height/4)));
	window->draw(sprite);
}

} /* namespace sfml */
