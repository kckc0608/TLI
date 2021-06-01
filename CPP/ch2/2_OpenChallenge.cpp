#include "Mystring.h"
#include <iostream>
#include <string>
using namespace std;
void openChallenge2() {
	string romio, julliet, winner;
	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요." << endl;
	cout << "로미오>>"; cin >> romio;
	cout << "줄리엣>>"; cin >> julliet;
	if (romio == julliet) {
		cout << "비겼습니다.";
		return;
	}
	else if (romio == "바위")
		if (julliet == "보")
			winner = "줄리엣";
		else
			winner = "로미오";
  
	else if (romio == "가위")
		if (julliet == "바위")
			winner = "줄리엣";
		else
			winner = "로미오";
  
	else if (romio == "보")
		if (julliet == "가위")
			winner = "줄리엣";
		else
			winner = "로미오";
	cout << winner << "(이)가 이겼습니다.";
	return;
}
