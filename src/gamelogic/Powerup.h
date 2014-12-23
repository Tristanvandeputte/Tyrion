/*
 * Powerup.h
 *
 *  Created on: Dec 12, 2014
 *      Author: uauser
 */

#ifndef POWERUP_H_
#define POWERUP_H_

#include "Entity.h"
#include "Bullet.h"
#include "EntityFactory.h"
#include <iostream>
#include <memory>
#include <unistd.h>

enum class PowerupType{BetterBullet,MoreHealth,MoreSpeed,ShootCooldownReduction};

namespace ty {

class Powerup : public Entity{
private:
	::PowerupType p_type;
	BulletType b_type;
public:
	Powerup();
	virtual ~Powerup();
	Powerup(Vector position,::PowerupType p_type);
	void update(double deltaT) override;
	virtual void draw();
	void collide(shared_ptr<Entity> with) override;
};

} /* namespace ty */

#endif /* POWERUP_H_ */
