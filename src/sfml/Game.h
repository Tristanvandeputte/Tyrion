/*
 * Game.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "../gamelogic/World.h"
#include "../parsing/levelparser.h"
#include "StopWatch.h"
#include "EntityFactory.h"
#include "KeyBoard.h"
#include <sstream>
#include <SFML/Graphics.hpp>

#ifndef GAME_H_
#define GAME_H_

class LevelParser;
class Map;

enum class State{Menu,LevelSelect,Run,Credits};

// TODO WorldFactory??
using namespace sf;

class Game {
private:
	string selected_level="null";
	//PowerupFactory pfac;
	ty::World game_world;
	StopWatch clock;
	State window_state;
	KeyBoard input=KeyBoard::getInstance();
	// static function to enforce singelton
	RenderWindow window;
	vector<Map> levels;
	LevelParser* parser;
public:
	Game();

	//enemie creation -> inlezen
	virtual ~Game();
	void run();
	void parse_levels();
};

#endif /* GAME_H_ */
