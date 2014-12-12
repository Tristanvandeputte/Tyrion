/*
 * Game.cpp
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#include "Game.h"

Game::Game() {
	input=KeyBoard::getInstance();

}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

void Game::menu(){
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
	shared_ptr<sf::RenderWindow> menu_window(new sf::RenderWindow(sf::VideoMode(640,480), "Tyrian Menu"));


	// vectors vr text
	sf::Text menu_text("menu ", font);
	menu_text.setOrigin(-200,-50);
	menu_text.setCharacterSize(50);
	sf::Text play_text("play ", font);
	play_text.setOrigin(-200,-200);
	play_text.setCharacterSize(30);
	sf::Text level_text("level select ", font);
	level_text.setOrigin(-200,-250);
	level_text.setCharacterSize(30);
	sf::Text credits_text("credits ", font);
	credits_text.setOrigin(-200,-300);
	credits_text.setCharacterSize(30);
	sf::Text exit_text("exit ", font);
	exit_text.setOrigin(-200,-350);
	exit_text.setCharacterSize(30);
	menu_text.setColor(sf::Color::Blue);
	menu_window->setPosition( sf::Vector2i(sf::VideoMode::getDesktopMode().width/4 + sf::VideoMode::getDesktopMode().width/16 , 0) );
	clock.reset();
	double selection_cooldown=0;
	while (menu_window->isOpen()){
			double deltaT=clock.getTime();
			sf::Event event;
			while (menu_window->pollEvent(event)){
				if (event.type == sf::Event::Closed)
					menu_window->close();
				if(input.checkKeyBoardInput(KeyPressed::Escape)){
					menu_window->close();
				}
				if(input.checkKeyBoardInput(KeyPressed::Space)){
					menu_window->close();
					if(selection==3){
						run();
					}
					if(selection==2){
						//iets v level select
					}
					if(selection==1){
						//iets v credits
					}
					if(selection==0){
						//niks openen
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
			if(selection_cooldown>0){
				selection_cooldown-=deltaT;
			}
			menu_window->clear();
			menu_window->draw(sprite);
			menu_window->draw(menu_text);
			menu_window->draw(play_text);
			menu_window->draw(level_text);
			menu_window->draw(credits_text);
			menu_window->draw(exit_text);
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
					menu_window->draw(rect);
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
					menu_window->draw(rect);
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
					menu_window->draw(rect);
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
					menu_window->draw(rect);
					break;
				}
			}
			menu_window->display();
		}
}


void Game::levelSelect(){
	// alles hier wordt bepaald door t inlezen
	int selection = 3; //bovenste selection
	shared_ptr<sf::RenderWindow> menu_window(new sf::RenderWindow(sf::VideoMode(640,480), "Tyrian Menu"));
	sf::Font font;
	char cwd[1024];
	getcwd(cwd,sizeof(cwd));
	string curdir(cwd);
	if (!font.loadFromFile(curdir+"/Resources//Spac3 tech free promo.ttf")){ //sla het pad op in de objecten, niet de textures.
		cout<<"ERROR IS KILL"<<endl;
	}

	// vectors vr text
	sf::Text menu_text("Levels", font);
	menu_text.setOrigin(-200,-50);
	menu_text.setCharacterSize(50);
	sf::Text play_text("Iphone case", font);
	play_text.setOrigin(-200,-200);
	play_text.setCharacterSize(30);
	sf::Text level_text("0", font);
	level_text.setOrigin(-200,-300);
	level_text.setCharacterSize(30);
	sf::Text credits_text("00", font);
	credits_text.setOrigin(-200,-400);
	credits_text.setCharacterSize(30);
	sf::Text exit_text("000", font);
	exit_text.setOrigin(-200,-800);
	exit_text.setCharacterSize(30);
	//text.setStyle(sf::Text::Bold);
	menu_text.setColor(sf::Color::Blue);
	menu_window->setPosition( sf::Vector2i(sf::VideoMode::getDesktopMode().width/4 + sf::VideoMode::getDesktopMode().width/16 , 0) );
	while (menu_window->isOpen()){
		sf::Event event;
		while (menu_window->pollEvent(event)){
			if (event.type == sf::Event::Closed)
				menu_window->close();
				if(input.checkKeyBoardInput(KeyPressed::Escape)){
					menu_window->close();
				}
				if(input.checkKeyBoardInput(KeyPressed::Space)){
					if(selection==3){
						run();
					}
					if(selection==2){
						//iets v level select
					}
					if(selection==1){
						//iets v credits
					}
					if(selection==0){
						menu_window->close();
					}
				}
			}
			if(input.checkKeyBoardInput(KeyPressed::Right)){
				//nothing yet
			}
			if(input.checkKeyBoardInput(KeyPressed::Left)){
				//nothing yet
			}
			if(input.checkKeyBoardInput(KeyPressed::Up)){
				selection = (selection+1)%3; // selection 0-3
			}
			if(input.checkKeyBoardInput(KeyPressed::Down)){
				selection = selection--;
				if(selection<0){
					selection = 3;
				}
			}
			cout<<selection<<endl;
			switch (selection){
				case 0:
				{
					Vector2f size{float(exit_text.getGlobalBounds().width),float(exit_text.getGlobalBounds().width)};
					RectangleShape rect{size};
					rect.setFillColor(Color::Transparent);
					rect.setOutlineColor(Color::Red);
					rect.setOutlineThickness(5);
					window.draw(rect);
				}
				case 1:
				{
					Vector2f size{float(credits_text.getGlobalBounds().width),float(credits_text.getGlobalBounds().width)};
					RectangleShape rect{size};
					rect.setFillColor(Color::Transparent);
					rect.setOutlineColor(Color::Red);
					rect.setOutlineThickness(5);
					window.draw(rect);
				}
				case 2:
				{
					Vector2f size{float(level_text.getGlobalBounds().width),float(level_text.getGlobalBounds().width)};
					RectangleShape rect{size};
					rect.setFillColor(Color::Transparent);
					rect.setOutlineColor(Color::Red);
					rect.setOutlineThickness(5);
					window.draw(rect);
				}
				case 3:
				{
					Vector2f size{float(play_text.getGlobalBounds().width),float(play_text.getGlobalBounds().width)};
					RectangleShape rect{size};
					rect.setFillColor(Color::Transparent);
					rect.setOutlineColor(Color::Red);
					rect.setOutlineThickness(5);
					window.draw(rect);
				}
			}
			menu_window->clear();
			menu_window->draw(menu_text);
			menu_window->draw(play_text);
			menu_window->draw(level_text);
			menu_window->draw(credits_text);
			menu_window->draw(exit_text);
			menu_window->display();
		}
}
void Game::credits(){
	// scrollende naam/namen
	shared_ptr<sf::RenderWindow> menu_window(new sf::RenderWindow(sf::VideoMode(640,480), "Credits"));
	sf::Font font;
	char cwd[1024];
	getcwd(cwd,sizeof(cwd));
	string curdir(cwd);
	if (!font.loadFromFile(curdir+"/Resources//Spac3 tech free promo.ttf")){ //sla het pad op in de objecten, niet de textures.
		cout<<"ERROR IS KILL"<<endl;
	}
	while (menu_window->isOpen()){
		sf::Event event;
		while (menu_window->pollEvent(event)){
			if (event.type == sf::Event::Closed){
				menu_window->close();
				if(input.checkKeyBoardInput(KeyPressed::Escape)){
					menu_window->close();
				}
			}
		}
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
			if (event.type == sf::Event::Closed || input.checkKeyBoardInput(KeyPressed::Escape)){
				window->close();
				menu();
			}
		}
		window->clear();

		//INPUT
		double deltaT=clock.getTime();
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
