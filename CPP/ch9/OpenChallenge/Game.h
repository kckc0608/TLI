#pragma once
#include <iostream>
#include "Human.h"
#include "Monster.h"
#include "Food.h"
using namespace std;
class Game {
	Human* human;
	Monster* monster;
	Food* food;
public:
	Game();
	void showState();
};
