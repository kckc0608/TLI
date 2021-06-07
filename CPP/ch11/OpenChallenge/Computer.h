#pragma once
#include "AbstractPlayer.h"
class Computer :public AbstractPlayer {
public:
	Computer() : AbstractPlayer("Computer") { }
	string turn();
};

