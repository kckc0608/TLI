#include "Food.h"
#include <ctime>
#include <cstdlib>
void Food::move()
{
	srand((unsigned)time(0));
	int n = rand() % 5;
	if (n > 3) {
		srand((unsigned)time(0));
		int m = rand() % 4;
		if (m == 0) {
			if (x > 0)
				x -= distance;
		}
		else if (m == 1) {
			if (x < 19)
				x += distance;
		}
		else if (m == 2) {
			if (y > 0)
				y -= distance;
		}
		else if (m == 3) {
			if (y < 9)
				y += distance;
		}
	}
}
