#include "Human.h"
#include <iostream>
using namespace std;
Human::Human(int x, int y) : GameObject(x, y, 1) { }
void Human::move() {
	char c;
	cout << "왼쪽(a), 아래(s), 위(d), 오른쪽(f) >> ";
	cin >> c;
	if (c == 'a') {
		if (x > 0)
			x -= distance;
	}
	else if (c == 's') {
		if (y < 9)
			y += distance;
	}
	else if (c == 'd') {
		if (y > 0)
			y -= distance;
	}
	else if (c == 'f') {
		if (x < 19)
			x += distance;
	}
}
