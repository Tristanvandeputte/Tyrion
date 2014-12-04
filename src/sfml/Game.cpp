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

void Game::menu(){
	shared_ptr<sf::RenderWindow> menu_window(new sf::RenderWindow(sf::VideoMode(640,480), "Tyrian Menu"));
	sf::Font font;
	char cwd[1024];
	getcwd(cwd,sizeof(cwd));
	string curdir(cwd);
	if (!font.loadFromFile(curdir+"/Resources//Spac3 tech free promo.ttf")){ //sla het pad op in de objecten, niet de textures.
		cout<<"ERROR IS KILL"<<endl;
	}
	sf::Text menu_text("menu ", font);
	menu_text.setCharacterSize(30);
	//text.setStyle(sf::Text::Bold);
	menu_text.setColor(sf::Color::Blue);
	menu_window->setPosition( sf::Vector2i(sf::VideoMode::getDesktopMode().width/4 + sf::VideoMode::getDesktopMode().width/16 , 0) );
	menu_text.setOrigin(-200,-200);
	while (menu_window->isOpen())
		{
			sf::Event event;
			while (menu_window->pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					menu_window->close();
				if(input.checkKeyBoardInput(KeyPressed::Escape)){
					menu_window->close();
				}
				if(input.checkKeyBoardInput(KeyPressed::Space)){
					run();
				}
			}
			menu_window->clear();
			menu_window->draw(menu_text);
			menu_window->display();
		}
	
}

void Game::run(){
	clock.reset();
	shared_ptr<sf::RenderWindow> window(new sf::RenderWindow(sf::VideoMode(640,480), "Tyrian"));
	Enemyvec a;
	tuple<double,EnemyType,double,double> one(1.0,EnemyType::BasicEnemy,-2,4.0);
	tuple<double,EnemyType,double,double> two(1.0,EnemyType::BasicEnemy,2,4.0);
	tuple<double,EnemyType,double,double> three(8.0,EnemyType::BasicEnemy,3.0,4.0);
	tuple<double,EnemyType,double,double> four(8.0,EnemyType::BasicEnemy,-3.0,4.0);
	tuple<double,EnemyType,double,double> five(2.0,EnemyType::ShootingEnemy,0.0,4.0);
	tuple<double,EnemyType,double,double> six(10.0,EnemyType::ShootingEnemy,-1.0,4.0);
	tuple<double,EnemyType,double,double> seven(10.0,EnemyType::ShootingEnemy,-2.0,4.0);
	tuple<double,EnemyType,double,double> eight(10.0,EnemyType::ShootingEnemy,2.0,4.0);
	tuple<double,EnemyType,double,double> nine(10.0,EnemyType::ShootingEnemy,1.0,4.0);
	a.push_back(one);
	a.push_back(two);
	a.push_back(three);
	a.push_back(four);
	a.push_back(five);
	a.push_back(six);
	a.push_back(seven);
	a.push_back(eight);
	a.push_back(nine);
	//vb enemies
	
	afac=PlayerFactory(window);
	bfac=BulletFactory(window);
	cfac=EnemyFactory(window);
	bafac=BackgroundFactory(window);
	window->setPosition( sf::Vector2i(sf::VideoMode::getDesktopMode().width/4 + sf::VideoMode::getDesktopMode().width/16 , 0) );
	game_world = World( &afac, &bfac, &cfac,a,&bafac);
	vector<string> BG({"Focus-Colors-2-640x960.jpg"}); //Background1.png
	game_world.setBackground(BG);
	game_world.startPlayer();
	//window->setMouseCursorVisible(false);
	window->setFramerateLimit(60);

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
		if(1/deltaT<20){
			cout<<1/deltaT<<endl;
		}
		double x_mov=0;
		double y_mov=0;
		if(input.checkKeyBoardInput(KeyPressed::Right)){
			x_mov++;
		}
		if(input.checkKeyBoardInput(KeyPressed::Left)){
			x_mov--;
		}
		if(input.checkKeyBoardInput(KeyPressed::Up)){
			y_mov++;
		}
		if(input.checkKeyBoardInput(KeyPressed::Down)){
			y_mov--;
		}
		Vector vec(x_mov,y_mov);
		
		game_world.getCurrentPlayer()->move(vec);
		if(input.checkKeyBoardInput(KeyPressed::Space)){
			game_world.playerShoots();
		}
		game_world.update(deltaT);
		//game_world.getCurrentPlayer()->move();

		// kan ook nog meer naar binnen

		if(game_world.checkGameEnd()){
			cout<<"you lost"<<endl;
			window->close();
		}
		
		game_world.draw();
		window->display();
	}
	
}

//TODO text
//
//sf::Text text;
//
//// select the font
//text.setFont(font); // font is a sf::Font
//
//// set the string to display
//text.setString("Hello world");
//
//// set the character size
//text.setCharacterSize(24); // in pixels, not points!
//
//// set the color
//text.setColor(sf::Color::Red);
//
//// set the text style
//text.setStyle(sf::Text::Bold | sf::Text::Underlined);
//
//...
//
//// inside the main loop, between window.clear() and window.display()
//window.draw(text);
