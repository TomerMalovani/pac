#ifndef _BOARD_H_
#define _BOARD_H_

#include "Point.h"
class Board
{
public:
	void Print();
	void initlayOut();

private:
	int layout[25][81];
	char initBoard[25][81] = {
	"00000000000000000000000000000000000000000000000000000000000000000000000000000000",
	"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"01111111111111111111111111111111111111111111111111111111111111111111111111111110",
"00000000000000000000000000000000000000000000000000000000000000000000000000000000"
	};
	enum type{WALL,PATH,PATH_BC};
	

};
#endif