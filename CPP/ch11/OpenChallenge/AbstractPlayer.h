#ifndef ABSTRACTPLAYER_H
#define ABSTRACTPLAYER_H
#include <string>
using namespace std;
class AbstractPlayer
{
	string name;
protected:
	string gbb[3] = { "가위", "바위", "보" };;
public:
	AbstractPlayer(string name) { this->name = name; }
	virtual string turn() = 0; // 순수 가상함수
	string getName() { return name; }
};
#endif
