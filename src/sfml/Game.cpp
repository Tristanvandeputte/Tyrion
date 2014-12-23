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
	parse_levels();
	prepareTextures();

	
}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

void Game::prepareTextures(){
	// constructing all the set sf things, TODO move to function
	char cwd[1024];
	getcwd(cwd,sizeof(cwd));
	string curdir(cwd);
	
	if (!static_background_texture.loadFromFile(curdir+"/Remastered Tyrian Graphics//double-moons-in-colorful-starry-sky-640x480.jpg")){
		cout<<"ERROR IS KILL"<<endl;
	}
	if (!font.loadFromFile(curdir+"/Resources//Spac3 tech free promo.ttf")){
		cout<<"ERROR IS KILL"<<endl;
	}
	if (!number_font.loadFromFile(curdir+"/Resources//cyberspace.otf")){
		cout<<"ERROR IS KILL"<<endl;
	}
	static_background_texture.setSmooth(true);
	sprite.setTexture(static_background_texture);
	sprite.scale(sf::Vector2f(0.45f, 0.45f));

	// vectors voor text bij sterver/ level completion
	sf::Text died("you died ", font);
	died.setOrigin(-100,-160);
	died.setCharacterSize(50);

	sf::Text won("you completed the level ", font);
	won.setOrigin(-100,-160);
	won.setCharacterSize(30);
	sf::Text space_info("press space to continue ", font);
	space_info.setOrigin(-100,-230);
	space_info.setCharacterSize(20);

	messages.push_back(space_info);
	messages.push_back(won);
	messages.push_back(died);
	
	// vectors voor text v/h menu
	sf::Text menu_text("menu ", font);
	menu_text.setOrigin(-250,-50);
	menu_text.setCharacterSize(50);
	sf::Text play_text("play ", font);
	play_text.setOrigin(-250,-200);
	play_text.setCharacterSize(30);
	sf::Text level_text("level select ", font);
	level_text.setOrigin(-250,-250);
	level_text.setCharacterSize(30);
	sf::Text credits_text("info ", font);
	credits_text.setOrigin(-250,-300);
	credits_text.setCharacterSize(30);
	sf::Text exit_text("exit ", font);
	exit_text.setOrigin(-250,-350);
	exit_text.setCharacterSize(30);
	menu_text.setColor(sf::Color::Blue);
	
	menu_messages.push_back(menu_text);
	menu_messages.push_back(exit_text);
	menu_messages.push_back(credits_text);
	menu_messages.push_back(level_text);
	menu_messages.push_back(play_text);
	
	// level selection text 
	sf::Text level_text_2("level select ", font);
	level_text_2.setOrigin(-100,-50);
	level_text_2.setCharacterSize(50);
	level_text_2.setColor(sf::Color::Blue);
	levels_text.push_back(level_text_2);
	
	int levelcount = 0;
	for(auto level : levels){
		cout<<"meh"<<endl;
		levelcount++;
		sf::Text new_text(level.map_name, font);
		new_text.setOrigin(-100,-80-(50*levelcount));
		new_text.setCharacterSize(20);
		//new_text.setColor(sf::Color::Red);
		levels_text.push_back(new_text);
	}
	
	//  info text
	sf::Text tristan("by tristan ", font);
	tristan.setOrigin(-20,-40);
	tristan.setCharacterSize(80);

	sf::Text info1("arrows for movement and menu navigation ", font);
	info1.setOrigin(-20,-150);
	info1.setCharacterSize(20);
	sf::Text info2("spacebar to shoot and select ", font);
	info2.setOrigin(-20,-180);
	info2.setCharacterSize(20);
	sf::Text info3("p to pause ", font);
	info3.setOrigin(-20,-210);
	info3.setCharacterSize(20);
	
	info_text.push_back(tristan);
	info_text.push_back(info1);
	info_text.push_back(info2);
	info_text.push_back(info3);
}

void Game::parse_levels(){
	levels = parser->createMaps("./src/parsing/maps.xml");
}

void Game::run(){
	window_state = State::Menu;
	clock.reset();

	// RUN STUFF
	window = make_shared<sf::RenderWindow>(sf::VideoMode(640,480), "Tyrian Menu");
	window->setPosition( sf::Vector2i(sf::VideoMode::getDesktopMode().width/4 + sf::VideoMode::getDesktopMode().width/16 ,0) );
	Enemyvec a;

	a = levels[0].enemies;
	sfml::EntityFactory entity_fac = sfml::EntityFactory(window);
	//pfac=PowerupFactory(window);
	game_world = ty::World( &entity_fac,a);
	game_world.setBackground(levels[0].BG);


	//window->setMouseCursorVisible(false);
	window->setFramerateLimit(60);
	int amount_of_levels = levels.size();

	while (window->isOpen()){
		double deltaT=clock.getTime();
		if(selection_cooldown>0){
			selection_cooldown-=deltaT;
		}
		// Current selected level
		sf::Text current_level_text("current level: "+levels[current_level_loaded].map_name, font);
		current_level_text.setOrigin(-300,-20);
		current_level_text.setCharacterSize(20);

		// GAME LOOP
		if(window_state == State::Run){
			if(reset){
				clock.reset();
				game_world.reset();
				game_world.startPlayer();
				reset = false;
			}

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

			vector<sf::Text> current_score = scoreDisplay();


			if(game_world.FinishedLevel()){
				LevelOver(true);
			}
			if(game_world.checkGameEnd()){
				LevelOver(false);
			}

			game_world.draw();

			for(auto text : current_score){
				window->draw(text);
			}
			window->draw(fps_display);
			window->draw(fps_number_display);
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
						reset = true;

						selection_cooldown = 0.2;
						// Prevents you from issuing move comments when the game screen is opening

						// in functie steken
					}
					if(selection==2){
						window->setTitle("Level Select");
						window_state = State::LevelSelect;
					}
					if(selection==1){
						window->setTitle("Info");
						window_state = State::Credits;
					}
					if(selection==0){
						window->close();
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
			}
			window->clear();
			window->draw(sprite);
			for(auto menu_selection : menu_messages){
				window->draw(menu_selection);
			}
			drawMenuRectangle();
			window->display();
		}
		else if(window_state == State::LevelSelect){
			sf::Event event;
			while (window->pollEvent(event)){
				if (event.type == sf::Event::Closed || input.checkKeyBoardInput(KeyPressed::Escape)){
					window_state = State::Menu;
					window->setTitle("Tyrian Menu");
					clock.reset();
				}
				if(input.checkKeyBoardInput(KeyPressed::Space) && selection_cooldown<=0){
					current_level_loaded = selectedlevel;
					game_world.changeLevel(levels[current_level_loaded].enemies,levels[current_level_loaded].BG);
				}
			}
			if(input.checkKeyBoardInput(KeyPressed::Up) && selection_cooldown<=0){
				selectedlevel--;
				if(selectedlevel<0){
					selectedlevel = amount_of_levels-1;
				}
				selection_cooldown = 0.2;
			}
			if(input.checkKeyBoardInput(KeyPressed::Down) && selection_cooldown<=0){
				selectedlevel++;
				if(selectedlevel>amount_of_levels-1){
					selectedlevel = 0;
				}
				selection_cooldown = 0.2;
			}
			//amount_of_levels;
			window->clear();
			window->draw(sprite);
			for(auto level_text : levels_text){
				window->draw(level_text);
			}

			window->draw(current_level_text);
			drawLevelRectangle();
			window->display();
		}
		else if(window_state == State::Credits){
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
			for(auto text : info_text){
				window->draw(text);
			}
			window->display();

		}
	}
}

void Game::drawLevelRectangle(){
	Vector2f size{float(levels_text[selectedlevel+1].getGlobalBounds().width)+20,float(levels_text[selectedlevel+1].getGlobalBounds().height)+10};
	RectangleShape rect{size};
	rect.setFillColor(Color::Transparent);
	rect.setOutlineColor(Color::Red);
	rect.setOutlineThickness(5);
	rect.setOrigin(levels_text[selectedlevel+1].getOrigin());
	rect.move(-10,0);
	window->draw(rect);
}

void Game::drawMenuRectangle(){
	Vector2f size{float(menu_messages[selection+1].getGlobalBounds().width)+20,float(menu_messages[selection+1].getGlobalBounds().height)+20};
	RectangleShape rect{size};
	rect.setFillColor(Color::Transparent);
	rect.setOutlineColor(Color::Red);
	rect.setOutlineThickness(5);
	rect.setOrigin(menu_messages[selection+1].getOrigin());
	rect.move(-10,0);
	window->draw(rect);			
}

vector<sf::Text> Game::FPSDisplay(){
	vector<sf::Text> FPS_text;
	// FPS display
	stringstream ss2;
	ss2<<1/deltaT;
	string fps_display_text = ss2.str();
	sf::Text fps_display("fps: ", font);
	fps_display.setOrigin(-20,-455);
	fps_display.setCharacterSize(15);
	sf::Text fps_number_display(fps_display_text, number_font);
	fps_number_display.setOrigin(-70,-456);
	fps_number_display.setCharacterSize(14);
	FPS_text.push_back(fps_display);
	FPS_text.push_back(fps_number_display);
	return FPS_text;
}

vector<sf::Text> Game::scoreDisplay(){
	vector<sf::Text> score_text;
	// score display
	stringstream ss;
	ss<<game_world.getScore();
	string score_display_text = ss.str();
	sf::Text score_display("score: ", font);
	score_display.setOrigin(-20,-430);
	score_display.setCharacterSize(15);
	sf::Text score_number_display(score_display_text, number_font);
	score_number_display.setOrigin(-90,-431);
	score_number_display.setCharacterSize(14);
	score_text.push_back(score_display);
	score_text.push_back(score_number_display);
	return score_text;
}

void Game::LevelOver(bool alive){
	window->clear();
	// the background
	window->draw(sprite);
	window->draw(messages[0]);
	if(alive){
		// died or completed level
		window->draw(messages[1]);
	}
	else{
		// score text
		window->draw(messages[2]);
		for(auto text : scoreDisplay()){
			window->draw(text);
		}
	}
	window->display();
	while(true){
		if(input.checkKeyBoardInput(KeyPressed::Space)){
			window_state = State::Menu;
			selection_cooldown = 2;
			clock.reset();
			break;
		}
	}
}