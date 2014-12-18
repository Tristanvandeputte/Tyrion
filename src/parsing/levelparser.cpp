/*
 * parser.cpp
 *
 * Author: Sten Verbois
 * Created on: 9/10/2014
 */

#include "levelparser.h"

LevelParser::LevelParser() {}

LevelParser::~LevelParser() {}

vector<Map> LevelParser::createMaps(string file_name){
	vector<Map> all_maps;
	using namespace CXml;
	XMLDocument doc;
	if(!doc.loadFile(file_name)) {
	    std::cout << "Document failed loading!" << std::endl;
	    std::cout << doc.errorDesc() << std::endl;
	}
	XMLElement root=doc.root();
	// loop over the maps
    for(XMLElement map : root.getChildren("Map")) {
    	Map this_map;
    	Enemyvec all_enemies;
    	Powerupvec all_powerups;
    	vector<string> all_backgrounds;
    	// mapname
    	string name=map.getChild("name").value();
    	// elements for the Enemies
    	XMLElement Enemies = map.getChild("Enemies");
    	std::vector<XMLElement> enemies = Enemies.getChildren();
    	// elements for the Powerups
    	XMLElement Powerups = map.getChild("Powerups");
    	std::vector<XMLElement> powerups = Powerups.getChildren();
    	// elements for the BackgroundImages
    	XMLElement BackgroundImages = map.getChild("BackgroundImages");
    	std::vector<XMLElement> backgrounds = BackgroundImages.getChildren();
    	 for(XMLElement enemy :enemies) {
    		 EnemyType type;
    		 string enemy_type = enemy.getChild("EnemyType").value();
    		 if(enemy_type == "BasicEnemy"){
    			 type = EnemyType::BasicEnemy;
    		 }
    		 if(enemy_type == "ShootingEnemy"){
    			 type = EnemyType::ShootingEnemy;
    		 }
    		 tuple<double,EnemyType,double,double> new_enemy(enemy.getChild("Time").valueAsDouble(),type,enemy.getChild("x").valueAsDouble(),enemy.getChild("y").valueAsDouble());
    		 all_enemies.push_back(new_enemy);
    	}
    	for(XMLElement powerup :powerups) {
    		 PowerupType type;
    		 string powerup_type = powerup.getChild("PowerupType").value();
    		 if(powerup_type == ""){
    		 }
    		 tuple<double,PowerupType,double,double> new_powerup(powerup.getChild("Time").valueAsDouble(),type,powerup.getChild("x").valueAsDouble(),powerup.getChild("y").valueAsDouble());
    		 all_powerups.push_back(new_powerup);
    	 }
    	 for(XMLElement background :backgrounds) {
    		 string new_background = background.getChild("Background").value();
    		 all_backgrounds.push_back(new_background);
    	 }
    	 this_map.BG = all_backgrounds;
    	 this_map.enemies = all_enemies;
    	 this_map.map_name = name;
    	 this_map.powerups = all_powerups;
    }
    return all_maps;
}
