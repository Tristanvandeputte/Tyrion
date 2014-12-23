/*
 * KeyBoard.h
 *
 *  Created on: Nov 13, 2014
 *      Author: uauser
 */

#ifndef KEYBOARD_H_
#define KEYBOARD_H_
#include <SFML/Graphics.hpp>

enum class KeyPressed{Left,Right,Up,Down,Space,Escape,Null,RightUp,RightDown,LeftUp,LeftDown,P};
namespace IO{

class KeyBoard {
private:
	KeyBoard(){}
	static KeyBoard* instance;
	KeyBoard(KeyBoard const&);             
	void operator=(KeyBoard const&);
public:
	static KeyBoard* getInstance(){
		if(!instance){
			instance = new KeyBoard;
		}
		return instance;
	}
	virtual ~KeyBoard();
	bool checkKeyBoardInput(KeyPressed input);
};
} // namespace IO

#endif /* KEYBOARD_H_ */
