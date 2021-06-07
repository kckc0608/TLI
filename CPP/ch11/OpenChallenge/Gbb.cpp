#include "Gbb.h"
#include "Human.h"
#include "Computer.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
AbstractPlayer* Gbb::findWinner(AbstractPlayer* p1, AbstractPlayer* p2)
{
	string p1_hand = p1->turn();
	string p2_hand = p2->turn();
	if (p1_hand == p2_hand)
		return nullptr;

	if (p1_hand == "가위") {
		if (p2_hand == "바위")
			return p2;
		else
			return p1;
	}
	else if (p1_hand == "바위") {
		if (p2_hand == "보")
			return p2;
		else
			return p1;
	}
	else if (p1_hand == "보") {
		if (p2_hand == "가위")
			return p2;
		else
			return p1;
	}
}
Gbb::Gbb() {
	string name;
	AbstractPlayer* winner;
	cout << "**** 컴퓨터와 사람이 가위 바위 보 대결을 펼칩니다. ****" << endl;
	cout << "선수 이름을 입력하세요 >>"; cin >> name; cin.ignore(); // cin 의 >> 연산자로 입력받는 경우 버퍼에 '\n'가 남아 있음.
	Human player(name);
	Computer computer;
	while (true) {
		winner = findWinner(&player, &computer);
		if (winner == nullptr)
			cout << "the same." << endl;
		else
			cout << winner->getName() << " is Winner," << endl;
	}
}
