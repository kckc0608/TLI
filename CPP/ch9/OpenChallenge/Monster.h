#pragma once
#include "GameObject.h"
class Monster : public GameObject {
public:
	Monster(int x, int y);
	void move();
	char getShape() { return 'M'; }
};
