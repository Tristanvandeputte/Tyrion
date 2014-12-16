/*
 * KeyBoard.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "KeyBoard.h"

KeyBoard::~KeyBoard() {
	// TODO Auto-generated destructor stub
}

bool KeyBoard::checkKeyBoardInput(KeyPressed input){
	if (KeyPressed::Right==input){
		return sf::Keyboard::isKeyPressed(sf::Keyboard::Right);
	}
	else if (KeyPressed::Left==input){
		return sf::Keyboard::isKeyPressed(sf::Keyboard::Left);
	}
	else if (KeyPressed::Escape==input){
		return sf::Keyboard::isKeyPressed(sf::Keyboard::Escape);
	}
	else if (KeyPressed::Up==input){
		return sf::Keyboard::isKeyPressed(sf::Keyboard::Up);
	}
	else if (KeyPressed::Down==input){
		return sf::Keyboard::isKeyPressed(sf::Keyboard::Down);
	}
	else if (KeyPressed::Space==input){
		return sf::Keyboard::isKeyPressed(sf::Keyboard::Space);
	}
	else if (KeyPressed::P==input){
		return sf::Keyboard::isKeyPressed(sf::Keyboard::P);
	}
}
