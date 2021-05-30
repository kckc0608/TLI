<main.cpp>
#include "Mystring.h"
#include <iostream>
#include <string>
#include "Exp.h"
using namespace std;
void test2() {
	Exp a(3, 2); // 3^2 = 9.
	Exp b(9); // 9^1 = 9
	Exp c; // 1^1 = 1

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a의 베이스 " << a.getBase() << ", " << "지수 " << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;
}

<Exp.h>
#ifndef EXP_H
#define EXP_H
class Exp
{
	int base, exp;
public:
	Exp(int base, int exp);
	Exp(int base);
	Exp();
	// Exp(int base = 1, int exp = 1); 로 줄여쓰면 되지만, 아직 디폴트 매개변수를 배우지 않은 상태

	int getValue();
	int getBase() { return base; }
	int getExp() { return exp; }
	bool equals(Exp e) { return this->getValue() == e.getValue(); }
};
#endif

<Exp.cpp>
#include "Exp.h"
Exp::Exp() : base(1), exp(1) {}
Exp::Exp(int base) : exp(1) { this->base = base; }
Exp::Exp(int base, int exp) { this->base = base; this->exp = exp; }
int Exp::getValue() {
	int v = 1;
	for (int i = 0; i < exp; i++)
		v *= base;
	return v;
}
