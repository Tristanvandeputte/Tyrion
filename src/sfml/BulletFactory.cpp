/*
 * BulletFactory.cpp
 *
 *  Created on: Nov 17, 2014
 *      Author: uauser
 */

#include "BulletFactory.h"

BulletFactory::BulletFactory() {
	// TODO Auto-generated constructor stub

}

BulletFactory::~BulletFactory() {
	// TODO Auto-generated destructor stub
}


BulletFactory::BulletFactory(shared_ptr<RenderWindow> window):window(window){
	
}

shared_ptr<ty::Entity> BulletFactory::makeBullet(double x, double y,BulletType type, Status status ){
	string texturespot;
	if(type==BulletType::BasicBullet){
		texturespot="SmallBullet.png";
	}
	Vector pos(x,y);
	shared_ptr<sfml::Bullet> p_ptr(new sfml::Bullet(pos,type,texturespot,status,window));
	//created_bullets.push_back(p_ptr);
	return p_ptr;
}