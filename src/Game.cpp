/*
 * Game.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "Game.h"

Game::Game() {
	// TODO Auto-generated constructor stub

}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

void Game::run(){
	
	game_world.startPlayer();
	
	sf::RenderWindow window(sf::VideoMode(640,480), "Tyrian");
	window.setPosition( sf::Vector2i(sf::VideoMode::getDesktopMode().width/4 + sf::VideoMode::getDesktopMode().width/16 , 0) );
	window.setMouseCursorVisible(false);
	window.setFramerateLimit(60);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if(input.checkKeyBoardInput(KeyPressed::Escape)){
				window.close();
			}
		}

		window.clear();
		
		//INPUT
		int deltaT=1; //
		//edge of screen checken!
		
		//precedentie eruit werken??
		//game world dit laten afhandelen, enkel input doorgeven
		if(input.checkKeyBoardInput(KeyPressed::Right)){
			game_world.movePlayerRight(deltaT);
		}
		if(input.checkKeyBoardInput(KeyPressed::Left)){
			game_world.movePlayerLeft(deltaT);
		}
		if(input.checkKeyBoardInput(KeyPressed::Up)){
			game_world.movePlayerUp(deltaT);
		}
		if(input.checkKeyBoardInput(KeyPressed::Down)){
			game_world.movePlayerDown(deltaT);
		}
		if(input.checkKeyBoardInput(KeyPressed::Space)){
			game_world.makeBullet(game_world.getCurrentPlayer()->getX(),game_world.getCurrentPlayer()->getY(),game_world.getCurrentPlayer()->Shoot(),Status::Ally);
		}
		game_world.update(deltaT);
		//game_world.getCurrentPlayer()->move();

		

		// kan ook nog meer naar binnen

		for(EntityPtr e_ptr : game_world.getEntities()){
			if(e_ptr != game_world.getCurrentPlayer()){
				window.draw(e_ptr->draw());
			}
		}
		
		window.draw(game_world.getCurrentPlayer()->draw());
		
		
		window.display();
	}
	
}
