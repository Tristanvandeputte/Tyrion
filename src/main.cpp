#include <SFML/Graphics.hpp>
#include <iostream>
#include <unistd.h>
#include "KeyBoard.h"
#include "Game.h"
#include "Player.h"
#include "PlayerFactory.h"
#include "World.h"
#include "Entity.h"
#include "EntityFactory.h"
using namespace std;

int main(){
	Game this_game;
	this_game.run();
	
	// TODO Overal sfml verwijderen uit de gamelogic
	
	
	/*
    sf::RenderWindow window(sf::VideoMode(360,360), "Tyrian");
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
        }

        window.clear();

        window.draw(sprite);

        window.display();
    }*/

    return 0;
}
