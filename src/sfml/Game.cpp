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
	Enemyvec a;
	tuple<double,EnemyType,double,double> one(5.0,EnemyType::BasicEnemy,0.0,2.0);
	a.push_back(one);
	//vb enemies
	
	
	cout<<"pff"<<endl;
	shared_ptr<sf::RenderWindow> window(new sf::RenderWindow(sf::VideoMode(640,480), "Tyrian"));
	afac=PlayerFactory(window);
	bfac=BulletFactory(window);
	cfac=EnemyFactory(window);
	game_world = World( &afac, &bfac, &cfac,a);
	game_world.startPlayer();
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
		double deltaT=clock.getTime(); //
		
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
