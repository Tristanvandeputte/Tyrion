/*
 * Game.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "Game.h"

Game::Game() {
	input=KeyBoard::getInstance();
	parser = new LevelParser();
}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

void Game::parse_levels(){
	levels = parser->createMaps("./src/parsing/maps.xml");
}

void Game::run(){
	parse_levels();
	window_state = State::Menu;
	clock.reset();
	// MENU STUFF
	double selection_cooldown=0;
	sf::Font font;
	sf::Texture static_background_texture;
	char cwd[1024];
	getcwd(cwd,sizeof(cwd));
	string curdir(cwd);
	if (!font.loadFromFile(curdir+"/Resources//Spac3 tech free promo.ttf")){ //sla het pad op in de objecten, niet de textures.
		cout<<"ERROR IS KILL"<<endl;
	}
	if (!static_background_texture.loadFromFile(curdir+"/Remastered Tyrian Graphics//double-moons-in-colorful-starry-sky-640x480.jpg")){
		cout<<"ERROR IS KILL"<<endl;
	}
	static_background_texture.setSmooth(true);
	sf::Sprite sprite;
	sprite.setTexture(static_background_texture);
	sprite.scale(sf::Vector2f(0.45f, 0.45f));

	int selection = 3; //bovenste selection

	// vectors vr text
	sf::Text menu_text("menu ", font);
	menu_text.setOrigin(-250,-50);
	menu_text.setCharacterSize(50);
	sf::Text play_text("play ", font);
	play_text.setOrigin(-250,-200);
	play_text.setCharacterSize(30);
	sf::Text level_text("level select ", font);
	level_text.setOrigin(-250,-250);
	level_text.setCharacterSize(30);
	sf::Text credits_text("credits ", font);
	credits_text.setOrigin(-250,-300);
	credits_text.setCharacterSize(30);
	sf::Text exit_text("exit ", font);
	exit_text.setOrigin(-250,-350);
	exit_text.setCharacterSize(30);
	menu_text.setColor(sf::Color::Blue);

	// RUN STUFF
	shared_ptr<sf::RenderWindow> window(new sf::RenderWindow(sf::VideoMode(640,480), "Tyrian Menu"));
	window->setPosition( sf::Vector2i(sf::VideoMode::getDesktopMode().width/4 + sf::VideoMode::getDesktopMode().width/16 ,0) );
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
	vector<string> BG({"Focus-Colors-2-640x960.jpg"}); //Background1.png
	afac=PlayerFactory(window);
	bfac=BulletFactory(window);
	cfac=EnemyFactory(window);
	bafac=BackgroundFactory(window);
	//pfac=PowerupFactory(window);
	game_world = World( &afac, &bfac, &cfac,a,&bafac);
	game_world.setBackground(BG);


	//window->setMouseCursorVisible(false);
	window->setFramerateLimit(60);
	bool reset = false;
	bool paused = false;
	while (window->isOpen()){
		if(reset){
			clock.reset();
			reset = false;
		}
		double deltaT=clock.getTime();
		if(selection_cooldown>0){
			selection_cooldown-=deltaT;
		}
		if(window_state == State::Run){
			sf::Event event;
			while (window->pollEvent(event)){
				if (event.type == sf::Event::Closed || input.checkKeyBoardInput(KeyPressed::Escape)){
					window_state = State::Menu;
					window->setTitle("Tyrian Menu");
					clock.reset();
				}
			}
			if(input.checkKeyBoardInput(KeyPressed::P) && selection_cooldown<=0){
				if(not paused){
					paused = true;
					selection_cooldown = 1;
				}
				else{
					paused = false;
					selection_cooldown = 0.2;
				}
			}
			window->clear();

			//INPUT
			if(paused){
				deltaT = 0;
			}
			if(1/deltaT<30){
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

			if(selection_cooldown<=0){
				game_world.getCurrentPlayer()->move(vec);
			}
			if(input.checkKeyBoardInput(KeyPressed::Space)){
				game_world.playerShoots();
			}
			game_world.update(deltaT);

			if(game_world.checkGameEnd()){
				cout<<"you lost"<<endl;
				window->close();
			}

			game_world.draw();
			window->display();
		}
		else if(window_state == State::Menu){
			double deltaT=clock.getTime();
			sf::Event event;
			while (window->pollEvent(event)){
				if (event.type == sf::Event::Closed){
					window->close();
				}
				if(input.checkKeyBoardInput(KeyPressed::Escape)){
					window->close();
				}
				if(input.checkKeyBoardInput(KeyPressed::Space) && selection_cooldown<=0){
					if(selection==3){
						window_state = State::Run;
						window->setTitle("Tyrian");
						game_world.reset();
						game_world.startPlayer();
						reset = true;

						selection_cooldown = 0.2;
						// Prevents you from issuing move comments when the game screen is opening

						// in functie steken
					}
					if(selection==2){
						//iets v level select
					}
					if(selection==1){
						window->setTitle("Credits");
						window_state = State::Credits;
					}
					if(selection==0){
						window->close();
					}
				}
				if (event.type == sf::Event::MouseButtonPressed){
					if (event.mouseButton.button == sf::Mouse::Left){
						std::cout << "the right button was pressed" << std::endl;
						std::cout << "mouse x: " << event.mouseButton.x << std::endl;
						std::cout << "mouse y: " << event.mouseButton.y << std::endl;
						//if(event.mouseButton.x<370 && event.mouseButton.x>240)
					}
				}
			}
			if(input.checkKeyBoardInput(KeyPressed::Right)){
				//nothing yet
			}
			if(input.checkKeyBoardInput(KeyPressed::Left)){
				//nothing yet
			}
			if(input.checkKeyBoardInput(KeyPressed::Up) && selection_cooldown<=0){
				selection = (selection+1)%4; // selection 0-3
				selection_cooldown = 0.2;
			}
			if(input.checkKeyBoardInput(KeyPressed::Down) && selection_cooldown<=0){
				selection--;
				if(selection<0){
					selection = 3;
				}
				selection_cooldown = 0.2;
			};
			
			//cout<<sf::Mouse::getPosition().x<<" "<<sf::Mouse::getPosition().y<<endl;
			if(sf::Mouse::getPosition().x>240 && sf::Mouse::getPosition().x<370 && sf::Mouse::getPosition().y>200 && sf::Mouse::getPosition().y<300){
				cout<<"kek"<<endl;	
				selection = 3;
				
			}
			if(sf::Mouse::getPosition().x>370 && event.mouseButton.x<240){}
			if(sf::Mouse::getPosition().x>370 && event.mouseButton.x<240){}
			if(sf::Mouse::getPosition().x>200 && event.mouseButton.x<245){}
			
			window->clear();
			window->draw(sprite);
			window->draw(menu_text);
			window->draw(play_text);
			window->draw(level_text);
			window->draw(credits_text);
			window->draw(exit_text);
			switch (selection){
			case 0:
			{
				Vector2f size{float(exit_text.getGlobalBounds().width)+20,float(exit_text.getGlobalBounds().height)+20};
				RectangleShape rect{size};
				rect.setFillColor(Color::Transparent);
				rect.setOutlineColor(Color::Red);
				rect.setOutlineThickness(5);
				rect.setOrigin(exit_text.getOrigin());
				rect.move(-10,0);
				window->draw(rect);
				break;
			}
			case 1:
			{
				Vector2f size{float(credits_text.getGlobalBounds().width)+20,float(credits_text.getGlobalBounds().height)+20};
				RectangleShape rect{size};
				rect.setFillColor(Color::Transparent);
				rect.setOutlineColor(Color::Red);
				rect.setOutlineThickness(5);
				rect.setOrigin(credits_text.getOrigin());
				rect.move(-10,0);
				window->draw(rect);
				break;
			}
			case 2:
			{
				Vector2f size{float(level_text.getGlobalBounds().width)+20,float(level_text.getGlobalBounds().height)+20};
				RectangleShape rect{size};
				rect.setFillColor(Color::Transparent);
				rect.setOutlineColor(Color::Red);
				rect.setOutlineThickness(5);
				rect.setOrigin(level_text.getOrigin());
				rect.move(-10,0);
				window->draw(rect);
				break;
			}
			case 3:
			{
				Vector2f size{float(play_text.getGlobalBounds().width)+20,float(play_text.getGlobalBounds().height)+20};
				RectangleShape rect{size};
				rect.setFillColor(Color::Transparent);
				rect.setOutlineColor(Color::Red);
				rect.setOutlineThickness(5);
				rect.setOrigin(play_text.getOrigin());
				rect.move(-10,0);
				window->draw(rect);
				break;
			}
			}
			window->display();
		}
		else if(window_state == State::LevelSelect){

		}
		else if(window_state == State::Credits){
			sf::Text tristan("tristan ", font);
			tristan.setOrigin(-60,-80);
			tristan.setCharacterSize(100);
			sf::Event event;
			while (window->pollEvent(event)){
				if (event.type == sf::Event::Closed || input.checkKeyBoardInput(KeyPressed::Escape)){
					window_state = State::Menu;
					window->setTitle("Tyrian Menu");
					clock.reset();
				}
			}
			window->clear();
			window->draw(sprite);
			window->draw(tristan);
			window->display();

		}
	}

}
