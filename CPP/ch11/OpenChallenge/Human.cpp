#include "Human.h"
#include <iostream>
using namespace std;
string Human::turn()
{
	//char hand[5];
	string hand;
	while (true) {
		cout << getName() << ">>";
		//cin.getline(hand, 5);
		getline(cin, hand);
		for (int i = 0; i < 3; i++)
			if (hand == AbstractPlayer::gbb[i])
				//return string(hand);
				return hand;
	}
}
