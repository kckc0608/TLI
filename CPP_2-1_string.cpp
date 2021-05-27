#include <iostream>
#include "Mystring.h"
using namespace std;
void String() {
	char str[10];
	char* str2;
	const char* str3 = "hello world!";
	// char* str3 = "hello world!" 는 오류 발생.
	char str4[] = "hello c++!";

	cin.getline(str, 10, '\n');
	// size = 10 으로 선언하더라도, 널문자 저장을 위해 9개의 문자만 저장됨
	cout << str << endl;;

	cin.getline(str, 8, '\n');
	// size = 8 인경우 7개의 문자를 저장하여 출력한다.
	cout << str << endl;

	// 즉 최대 사이즈-1 개의 문자를 입력받거나, 마지막 문자를 만나면 문자열의 입력이 종료된다.
	// delimitChar는 cin버퍼에서도 사라지고 배열에도 저장되지 않으며, 문자열 마지막에 \0이 추가된다.
	// 하지만, 사이즈를 초과해서 입력받은 문자는 버퍼에 남아있는지 바로 프로그램이 종료된다.

	//cin.getline(str2, 10);  // 초기화 되지 않은 지역변수를 사용할 수 없다.
	//cout << str2 << endl;

	//cin.getline(str3, 10); // const char를 인수로 넘길 수 없다. 인수형식이 일치하지 않는다.
	//cout << str3 << endl;

	cout << str4 << endl;
	cin.getline(str4, 10); // 덮어쓰기
	cout << str4 << endl;
}
