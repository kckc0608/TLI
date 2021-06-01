#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>
using namespace std;
class Player
{
	string name;
public:
	Player(string name) { this->name = name; }
	string getName() { return name; }
	int getAnswer();
};
#endif

