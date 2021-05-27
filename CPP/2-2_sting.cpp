#include <iostream>
#include <string>
#include "Mystring.h"
using namespace std;
void String2() {
	string str1("hello string!"); // 문자열 선언 1
	cout << str1 << endl;

	string str2 = "hello string 2!"; // 문자열 선언 2
	cout << str2 << endl;
	

	// 문자열 선언 1
	string inputString; // 빈문자열 선언
	cin >> inputString; // 문자열 입력받기
	cout << inputString << endl; 

	// 문자열 선언 2 ( 문자열 선언 1과 함께 실행시 getline 함수로 문자열 입력이 되지 않는다.)
	// cin은 '\n'을 변수에 담지 않고, 입력버퍼에 남겨둔다. getline은 '\n' 을 변수에 담는다.
	cin.ignore();
	// cin.ignore() 은 입력버퍼에 담겨있는 문자 하나를 무시한다. ('\n')을 무시한다.

	string stringWithSpace;
	getline(cin, stringWithSpace, '\n'); // 공백을 포함한 문자열 입력받기
	cout << stringWithSpace << endl;
}
