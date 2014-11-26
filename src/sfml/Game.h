/*
 * Game.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "../gamelogic/World.h"
#include "StopWatch.h"
#include "PlayerFactory.h"
#include "BulletFactory.h"
#include "EnemyFactory.h"
#include "../gamelogic/World.h"
#include "KeyBoard.h"
#include <SFML/Graphics.hpp>

#ifndef GAME_H_
#define GAME_H_

// TODO WorldFactory??


class Game {
private:
	PlayerFactory afac;
	BulletFactory bfac;
	EnemyFactory cfac;
	ty::World game_world;
	StopWatch clock;
	KeyBoard input;
public:
	Game();
	virtual ~Game();
	void run();
};

#endif /* GAME_H_ */