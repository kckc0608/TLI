#include "WordGame.h"
#include <iostream>
using namespace std;
WordGame::WordGame() {
	cout << "끝말 잇기 게임을 시작합니다." << endl;
	cout << "게임에 참가하는 인원은 몇명입니까? >> "; cin >> playerNumber;
	
	addPlayer(playerNumber);
	gameStart("아버지");
}

void WordGame::addPlayer(int numberOfPlayer) {
	for (int i = 0; i < numberOfPlayer; i++) {
		string name;
		cout << "참가자의 이름을 입력하세요. 빈칸없이 >>"; cin >> name;
		Player user(name);
		playerList.push_back(user);
	}
}

void WordGame::gameStart(string startWord) {
	cout << "시작하는 단어는 " << startWord << "입니다." << endl;
	nowWord = startWord;
	while (true) {
		string saidWord = playerList[nowTurn].sayWord();
		if (checkWord(saidWord)) {
			nowTurn++;
			nowTurn %= playerNumber;
			nowWord = saidWord;
		}
		else {
			break;
		}
	}
}

bool WordGame::checkWord(string word)
{
	int size = nowWord.size();
	return (nowWord.at(size - 1) == word.at(1) && nowWord.at(size - 2) == word.at(0));
}
