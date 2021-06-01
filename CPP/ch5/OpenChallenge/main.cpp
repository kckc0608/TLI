#include "Mystring.h"
#include <iostream>
#include <string>
#include "Morse.h"
using namespace std;

void test2() {
	string text, morse_text;
	cout << "아래에 영문 텍스트를 입력하세요. 모스부호로 바꿉니다." << endl;
	getline(cin, text);

	Morse morse;
	morse.text2Morse(text, morse_text);
	cout << morse_text << endl;

	cout << endl;

	cout << "모스 부호를 다시 영문 텍스트로 바꿉니다." << endl;
	if (!morse.morse2Text(morse_text, text)) {
		cout << "모스 부호를 영문 텍스트로 바꾸는데 실패했습니다." << endl;
	}
	else {
		cout << text << endl;
	}
}
