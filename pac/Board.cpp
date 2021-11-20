#include "Board.h"

int Board::maxScore()
{
	int count = 0;
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 80; j++) {
			if (initBoard[i][j] == '.')
				count++;
		}
	}
	return count;
}


void Board::Print(bool isColored) {
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 81; j++) {
			if (initBoard[i][j] == '#')
			{
				if (isColored == true)
					setTextColor(Color::BLUE);
				cout << '#';
			}
			if (initBoard[i][j] == '.')
			{
				setBreadCrumbCoor(i, j, 1);
				if (isColored == true)
					setTextColor(Color::WHITE);
				cout << '.';
				//count++;
			}
			if (initBoard[i][j] == ' ')
			{
				setBreadCrumbCoor(i, j, 0);
				cout << ' ';
			}
		}

		cout << endl;
	}
	for (int i = 0; i < 81; i++)
	{
		cout << initBoard[19][i];
	}
}