/*
 * parser.h
 *
 * Author: Sten Verbois
 * Created on: 9/10/2014
 */

#ifndef PARSER_H_
#define PARSER_H_

#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "compactxml.h"
#include "../sfml/Game.h"
using namespace std;

struct Map{
	Enemyvec enemies;
	Powerupvec powerups;
	string map_name;
	vector<string> BG;
};

class LevelParser {

public:
    LevelParser();
    virtual ~LevelParser();
    vector<Map> createMaps(string file_name);

};
#endif