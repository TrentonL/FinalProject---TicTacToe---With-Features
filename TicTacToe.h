#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <cctype>
using namespace std;
// **********************************
// *								*
// *   Classes - Chapters 13 & 14	*
// *								*
// **********************************
class TicTacToe { // Class

private: // Private data
	int i;
	int num=49;
// **********************************
// *								*
// *  Structured data - Chapter 11  *
// *								*
// **********************************
	struct Player { // Structured Data
		string name;
		int win;
		int lose;
		int gamesPlayed;
	};
public: // Public data
	Player Player1;
	Player Player2;
	void setBoard(char *, int, int);
	void drawBoard(char *);
	char TTTwinner(char *);
	void tictactoe(char *);
	void playerOneWin();
	void playerTwoWin();
	void tie();
	// Constructor
	TicTacToe(int win=0, int lose=0, int gamesPlayed=0) {
		Player1.win = win;
		Player1.lose = lose;
		Player1.gamesPlayed = gamesPlayed;

		Player2.win = win;
		Player2.lose = lose;
		Player2.gamesPlayed = gamesPlayed;
	}
};

#endif