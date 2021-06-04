#pragma once
#include "GameObject.h"
class Food :public GameObject {
public:
	Food(int x, int y) : GameObject(x, y, 1) { }
	void move();
	char getShape() { return '@'; }
};

