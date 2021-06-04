#include "Monster.h"
#include <cstdlib>
#include <ctime>
Monster::Monster(int x, int y) : GameObject(x, y, 2) { }
void Monster::move() {
	srand((unsigned)time(0));
	int n = rand() % 4;
	if (n == 0) {
		if (x > 0)
			x -= distance;
	}
	else if (n == 1) {
		if (x < 19)
			x += distance;
	}
	else if (n == 2) {
		if (y > 0)
			y -= distance;
	}
	else if (n == 3) {
		if (y < 9)
			y += distance;
	}
}
