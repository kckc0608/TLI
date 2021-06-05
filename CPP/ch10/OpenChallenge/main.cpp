#include "Mystring.h"
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Word.h"
using namespace std;
void test2() {
	vector<Word> v;

	v.push_back(*(new Word("human", "인간")));
	v.push_back(*(new Word("bear", "곰")));
	v.push_back(*(new Word("baby", "아기")));
	v.push_back(*(new Word("love", "사랑")));
	v.push_back(*(new Word("dall", "인형")));

	cout << "영어 어휘 테스트를 시작합니다. 1~4 외 다른 입력시 종료합니다." << endl;
	while (true) {
		srand((unsigned)time(0)); int q = rand() % v.size();
		cout << v[q].getEng() << '?' << endl;;

		int answer = (rand() % 4);
		for (int i = 0; i < 4; i++) {
			cout << '(' << i + 1 << ") ";
			if (i == answer) {
				cout << v[q].getKor();
			}
			else {
				int other = rand() % v.size();
				cout << v[other].getKor();
			}
			cout << ' ';
		}
		cout << ":>>";
		
		int inputAnswer; cin >> inputAnswer;
		if (inputAnswer > 4 || inputAnswer < 1)
			break;
		
		if (inputAnswer == answer + 1)
			cout << "Excellent !!" << endl;
		else
			cout << "No. !!" << endl;

	}
}
// 단어 폭이 좁아서 보기로 똑같은 보기가 나오기도한다. 따라서 중복 보기를 없애는 코드를 넣어주면 더 좋긴 하겠다.
