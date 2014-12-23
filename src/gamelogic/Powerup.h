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
	double bullet_cooldown_reduction{0};
	int health_increase{0};
	double speed_increase{0};
	BulletType new_bullet=BulletType::BasicBullet;
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
