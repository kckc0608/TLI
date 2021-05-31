#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;
class Player {
	string name;
public:
	Player(string name);
	string sayWord();
};
#endif

