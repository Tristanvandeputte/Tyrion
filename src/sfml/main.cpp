#include <SFML/Graphics.hpp>
#include <iostream>
#include <unistd.h>
//#include "KeyBoard.h"
#include "Game.h"
//#include "Player.h"
//#include "PlayerFactory.h"
//#include "Entity.h"
//#include "EntityFactory.h"
using namespace std;

// TODO time en apeed beide use bij collision

std::map<string,Texture> sfml::Player::all_textures = {};
std::map<string,Texture> sfml::Bullet::all_textures = {};
std::map<string,Texture> sfml::Enemy::all_textures = {};

int main(){
	cout<<"kekekekek"<<endl;
	Game this_game;
	this_game.run();
	
    return 0;
}
