/*
 * Game.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "Game.h"

Game::Game() {
	afac=PlayerFactory();
	bfac=BulletFactory();
	cfac=EnemyFactory();
	game_world = World( &afac, &bfac, &cfac);
	// TODO Auto-generated constructor stub

}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

void Game::run(){
	cout<<"pff"<<endl;
	game_world.startPlayer();
	shared_ptr<sf::RenderWindow> window(new sf::RenderWindow(sf::VideoMode(640,480), "Tyrian"));
	window->setPosition( sf::Vector2i(sf::VideoMode::getDesktopMode().width/4 + sf::VideoMode::getDesktopMode().width/16 , 0) );
	window->setMouseCursorVisible(false);
	window->setFramerateLimit(60);

	cout<<"pff"<<endl;
	while (window->isOpen())
	{
		sf::Event event;
		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window->close();
			if(input.checkKeyBoardInput(KeyPressed::Escape)){
				window->close();
			}
		}

		window->clear();
		
		//INPUT
		int deltaT=1; //
		
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

		game_world.draw();
		
		window->display();
	}
	
}
