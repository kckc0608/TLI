#pragma once
#include "GameObject.h"
class Human : public GameObject {
public:
	Human(int x, int y);
	void move(); // virtual 키워드는 생략가능. 순수 가상 함수 오버라이딩.
	char getShape() { return 'H'; }
};

