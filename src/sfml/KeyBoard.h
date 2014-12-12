/*
 * KeyBoard.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef KEYBOARD_H_
#define KEYBOARD_H_
#include <SFML/Graphics.hpp>

enum class KeyPressed{Left,Right,Up,Down,Space,Escape,Null,RightUp,RightDown,LeftUp,LeftDown};

class KeyBoard {
private:
	KeyBoard(){}
public:
    static KeyBoard& getInstance(){
        static KeyBoard instance;
        return instance;
    }
	//KeyBoard(KeyBoard const&);             
    //void operator=(KeyBoard const&);
	virtual ~KeyBoard();
	bool checkKeyBoardInput(KeyPressed input);
};

#endif /* KEYBOARD_H_ */
