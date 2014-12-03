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
#include "BackgroundFactory.h"
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
	BackgroundFactory bafac;
	ty::World game_world;
	StopWatch clock;
	KeyBoard input;
	RenderWindow window;
public:
	Game();

	//enemie creation -> inlezen
	virtual ~Game();
	void run();
	void menu()
};

#endif /* GAME_H_ */
