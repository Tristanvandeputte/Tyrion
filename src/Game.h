/*
 * Game.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "World.h"
#include "StopWatch.h"
#include "KeyBoard.h"

#ifndef GAME_H_
#define GAME_H_


class Game {
private:
	ty::World game_world;
	StopWatch clock;
	KeyBoard input;
public:
	Game();
	virtual ~Game();
	void run();
};

#endif /* GAME_H_ */
