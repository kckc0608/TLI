#ifndef UPANDDOWNGAME_H
#define UPANDDOWNGAME_H
#include <ctime>
#include <cstdlib>
#include <iostream>
#include "Player.h"
using namespace std;
class UpAndDownGame
{
public:
	static void CreateAnswer();
	static void ShowRange();
	static void GetAnswer(Player p);
	static void StartGame();
	static int answer, num;
	static int row_range, high_range;
};
#endif

