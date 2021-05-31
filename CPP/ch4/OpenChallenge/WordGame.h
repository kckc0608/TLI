#ifndef WORDGAME_H
#define WORDGAME_H

#include <string>
#include <vector>
#include "Player.h"
using namespace std;

class WordGame {
	int playerNumber;
	int nowTurn = 0;
	string nowWord;
	vector<Player> playerList;

	void addPlayer(int numberOfPlayer);
	void gameStart(string starWord);
	bool checkWord(string word);
public:
	WordGame();
};
#endif
