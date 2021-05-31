#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(string name)
{
	this->name = name;
}

string Player::sayWord()
{
	string word;
	cout << name << ">>"; cin >> word;
	return word;
}
