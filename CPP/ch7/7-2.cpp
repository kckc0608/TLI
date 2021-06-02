#include "Mystring.h"
#include <iostream>
#include <string>
using namespace std;

class Rect; // equals 함수의 선언에 사용한 Rect 객체를 컴파일러가 인식하기 위해 미리 선언.

class RectManager {
public:
	bool equals(Rect r, Rect s);
};

class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool RectManager::equals(Rect r, Rect s); // RectManager에 선언된 equals 함수를 가져옴.
};

bool RectManager::equals(Rect r, Rect s) { // 함수 구현, RectManager의 멤버함수 임에 주의.
	return (r.width == s.width && r.height == s.height);
}

void test2() {
	Rect a(3, 4), b(3, 4);
	RectManager mn;

	if (mn.equals(a, b)) {
		cout << "equal" << endl;
	}
	else
		cout << "not equal" << endl;
}
