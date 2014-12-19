/*
 * Enemy.cpp
 *
 *  Created on: Nov 25, 2014
 *      Author: uauser
 */

#include "Enemy.h"

namespace sfml {


Enemy::Enemy() {
	// TODO Auto-generated constructor stub

}

Enemy::~Enemy() {
	// TODO Auto-generated destructor stub
}

Enemy::Enemy(Vector position,double speed ,int health, int damage,EnemyType type, ty::EntityFactory* bullet_factory, ty::World* parent,shared_ptr<RenderWindow> window):ty::Enemy(position,speed,health,damage,type,bullet_factory,parent),window(window){
	//status = Status::Foe;
	sf::Texture texture;
	char cwd[1024];
	getcwd(cwd,sizeof(cwd));
	string curdir(cwd);
	if(type == EnemyType::BasicEnemy){
		texture_location="MovingEnemy.png";
	}
	if(type == EnemyType::ShootingEnemy){
		texture_location="MovingEnemy.png";
	}
	if (!texture.loadFromFile(curdir+"/Remastered Tyrian Graphics/"+texture_location)){ //sla het pad op in de objecten, niet de textures.
		cout<<"ERROR IS KILL"<<endl;
	}
	//cout<<curdir+"/Remastered Tyrian Graphics/"+texture_location<<endl;
	//texture.update(image); NODIG VR BEWEGING DENK K
	texture.setSmooth(true); //smooth
	all_textures[texture_location]=texture;

	// TODO costum functie die dit bepaald
}
void Enemy::draw(){
	sf::Sprite sprite;
	sprite.setTexture(all_textures[texture_location]);
	sprite.setPosition(sf::Vector2f((position.getX()*80.0)+320.0-(sprite.getGlobalBounds().width/4), (-1.0*position.getY()*80.0)+240.0-(sprite.getGlobalBounds().height/4)));
	sprite.scale(sf::Vector2f(1.8f, 1.8f));
	if(radius==0){
		radius = std::max((sprite.getGlobalBounds().width/2)/80,(sprite.getGlobalBounds().height/2)/80);
	}
	window->draw(sprite);
}


} /* namespace sfml */
