// 1
#include "Mystring.h"
#include <iostream>
using namespace std;
void test2() {
	for (int i = 0; i < 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << 10 * i + j;
			if (i == 0 && j < 10)
				cout << ' ';
			cout << "     ";
		}
		cout << endl;
	}
}

// output
1      2      3      4      5      6      7      8      9      10
11     12     13     14     15     16     17     18     19     20
21     22     23     24     25     26     27     28     29     30
31     32     33     34     35     36     37     38     39     40
41     42     43     44     45     46     47     48     49     50
51     52     53     54     55     56     57     58     59     60
61     62     63     64     65     66     67     68     69     70
71     72     73     74     75     76     77     78     79     80
81     82     83     84     85     86     87     88     89     90
91     92     93     94     95     96     97     98     99     100
  
// 2
#include "Mystring.h"
#include <iostream>
using namespace std;
void test2() {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout << j << 'x' << i << '=' << j * i;
			if (j * i < 10)
				cout << ' ';
			cout << "  ";
		}
		cout << endl;
	}
}
// output
1x1=1   2x1=2   3x1=3   4x1=4   5x1=5   6x1=6   7x1=7   8x1=8   9x1=9
1x2=2   2x2=4   3x2=6   4x2=8   5x2=10  6x2=12  7x2=14  8x2=16  9x2=18
1x3=3   2x3=6   3x3=9   4x3=12  5x3=15  6x3=18  7x3=21  8x3=24  9x3=27
1x4=4   2x4=8   3x4=12  4x4=16  5x4=20  6x4=24  7x4=28  8x4=32  9x4=36
1x5=5   2x5=10  3x5=15  4x5=20  5x5=25  6x5=30  7x5=35  8x5=40  9x5=45
1x6=6   2x6=12  3x6=18  4x6=24  5x6=30  6x6=36  7x6=42  8x6=48  9x6=54
1x7=7   2x7=14  3x7=21  4x7=28  5x7=35  6x7=42  7x7=49  8x7=56  9x7=63
1x8=8   2x8=16  3x8=24  4x8=32  5x8=40  6x8=48  7x8=56  8x8=64  9x8=72
1x9=9   2x9=18  3x9=27  4x9=36  5x9=45  6x9=54  7x9=63  8x9=72  9x9=81

// 3
#include "Mystring.h"
#include <iostream>
using namespace std;
void test2() {
	int n1, n2;
	cout << "두 수를 입력하라>>";
	cin >> n1 >> n2;
	
	cout << "큰 수 = ";
	if (n1 > n2)
		cout << n1;
	else
		cout << n2;
}
// output
두 수를 입력하라>>15 10
큰 수 = 15

// 4
#include "Mystring.h"
#include <iostream>
using namespace std;
void test2() {
	double r[5];
	cout << "5 개의 실수를 입력하라>>";
	for (int i = 0; i < 5; i++)
		cin >> r[i];
	
	double maxR = r[0];

	for (int i = 0; i < 5; i++) {
		if (r[i] > maxR)
			maxR = r[i];
	}

	cout << "제일 큰 수 = " << maxR;

}
// output
5 개의 실수를 입력하라>>1.1 -2.2 3.4 9.9 7.7
제일 큰 수 = 9.9

// 5
#include "Mystring.h"
#include <iostream>
using namespace std;
void test2() {
	cout << "문자들을 입력하라(100개 미만)" << endl;
	char str[100];
	int count = 0;
	cin.getline(str, 100);
	for (int i = 0; i < 100; i++) {
		if (str[i] == 'x')
			count++;
		if (str[i] == NULL)
			break;
	}
	cout << "x의 개수는 " << count;

}
// output
문자들을 입력하라(100개 미만)
asbxbaanfdx
x의 개수는 2

// 6
#include "Mystring.h"
#include <iostream>
#include <string>
using namespace std;
void test2() {
	string str1, str2;
	cout << "새 암호를 입력하세요>>"; cin >> str1;
	cout << "새 암호를 한번 더 입력하세요>>"; cin >> str2;
	if (str1 == str2)
		cout << "같습니다.";
	else
		cout << "같지 않습니다.";
}

// 7
#include "Mystring.h"
#include <iostream>
#include <string>
using namespace std;
void test2() {
	while (true) {
		string str;
		cout << "종료하고 싶으면 yes를 입력하세요>>";
		getline(cin, str);
		if (str == "yes") {
			cout << "종료합니다...";
			break;
		}
	}
}

// 8
#include "Mystring.h"
#include <iostream>
#include <string>
using namespace std;
void test2() {
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요." << endl;
	char str[5][100];
	for (int i = 0; i < 5; i++) {
		cin.getline(str[i], 100, ';');
	}
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << " : " << str[i] << endl;
	}
}
// cin.getline() 의 세번째 인자로 특정 문자를 넘겨줄 시, cin으로 문장 하나를 통으로 다 읽어서 버퍼에 넣은다음, 버퍼에서 해당 문자를 만나면 배열에 저장,
// 다시 버퍼에 남은 문자들로부터 읽기시작해서 특정문자를 만나면 배열에 저장. 이걸 반복하는 것 같음.
// 그렇다면 버퍼에서 읽어오는걸 반복하는 건 알겠는데 왜 cin의 멤버함수가 반복 호출됨에도 "문자열의 입력" 자체를 반복하지 않는걸까? -> 교수님께 질문
// * 문자열 출력시킬 때, ' : ' 로 출력하려고 해서 이상한 숫자가 출력되었었음. " : " 으로 출력해야 제대로 출력됨. 주의!

// 9
#include "Mystring.h"
#include <iostream>
#include <string>
using namespace std;
void test2() {
	string name, address, age;
	cout << "이름은?"; getline(cin, name);
	cout << "주소는?"; getline(cin, address);
	cout << "나이는?"; getline(cin, age);
	cout << name << ", " << address << ", " << age << "세";
}

// 10
#include "Mystring.h"
#include <iostream>
#include <string>
using namespace std;
void test2() {
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		for (int j = 0; j <= i; j++) {
			cout << str[j];
		}
		cout << endl;
	}
}

// 11
#include "Mystring.h"
#include <iostream>
#include <string>
using namespace std;
void test2() {
	int k, n = 0;
	int sum = 0;
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	for (k = 1; k <= n; k++) {
		sum += k;
	}
	cout << "1에서 " << n << "까지의 합은 " << sum << " 입니다.\n";
}

// 12
#include "Mystring.h"
#include <iostream>
#include <string>
using namespace std;
int sum(int a, int b);
void test2() {
	int n = 0;
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	cout << "1에서 " << n << "까지의 합은 " << sum(1,n) << " 입니다.\n";
}

int sum(int a, int b) {
	int k, res = 0;
	for (k = a; k <= b; k++) {
		res += k;
	}
	return res;
}
// * C언어에서 함수의 원형 선언시 매개변수가 필요없지만, C++에서는 함수의 원형 선언시 매개변수까지 입력을 해야한다. 
//   함수의 중복이 가능하기 때문.

// 13
#include "Mystring.h"
#include <iostream>
#include <string>
using namespace std;
void test2() {
	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;
	while (true) {
		int select, people;
		string menu;
		bool fin = false;
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>"; cin >> select;
		
		switch (select) {
		case 1:
			menu = "짬뽕";
			break;
		case 2:
			menu = "짜장";
			break;
		case 3:
			menu = "군만두";
			break;
		case 4:
			cout << "오늘 영업은 끝났습니다." << endl;
			fin = true;
			break;
		default:
			cout << "다시 주문하세요!!" << endl;
			continue;
		}

		if (fin)
			break;

		cout << "몇인분?";
		cin >> people;
		cout << menu << " " << people << "인분 나왔습니다" << endl;
	}
}

// 14
#include "Mystring.h"
#include <iostream>
#include <string>
using namespace std;
void test2() {
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
	string menu;
	int cup, pay, sales = 0;
	while (true) {
		cout << "주문>>";
		cin >> menu >> cup;
		if (menu == "에스프레소")
			pay = (2000 * cup);
		else if (menu == "아메리카노")
			pay = (2300 * cup);
		else if (menu == "카푸치노")
			pay = (2500 * cup);

		cout << pay << "원입니다. 맛있게 드세요" << endl;
		sales += pay;

		if (sales >= 20000) {
			cout << "오늘 " << sales << "원을 판매하여 카페를 닫습니다. 내일봐요~~~" << endl;
			break;
		}
	}
}

// 15
// 문제 의도와는 다른 풀이임. 문제에서는 공백을 포함한 한 문자열을 입력받고, 공백을 찾아 문자열을 파싱, 문자열을 정수로 고치기 위해 atoi() 함수를 이용하도록 함.
// 공백으로 구분하는 경우, 굳이 그렇게 하지 않아도 cin을 이용하면 해결됨.
#include "Mystring.h"
#include <iostream>
#include <string>
using namespace std;
void test2() {
	while (true) {
		int operand1, operand2;
		char op;
		cout << "? ";
		cin >> operand1 >> op >> operand2;
		cout << operand1 << ' ' << op << ' ' << operand2 << " = ";
		if (op == '+')
			cout << operand1 + operand2;
		else if (op == '-')
			cout << operand1 - operand2;
		else if (op == '*')
			cout << operand1 * operand2;
		else if (op == '/')
			cout << operand1 / operand2;
		else if (op == '%')
			cout << operand1 % operand2;

		cout << endl;
	}
}

// 문제 의도 풀이는 다음과 같음. (atoi의 인자가 const char* 라서 string 을 const char * 으로 변환하느라 좀 귀찮았다.
// 원래라면 stoi() 를 사용해서 string을 바꿔야 함.
#include "Mystring.h"
#include <iostream>
#include <string>
using namespace std;
void test2() {
	while (true) {
		string input;
		int operand1 = 0, operand2 = 0;
		char op = '1';
		cout << "? ";
		getline(cin, input);
		string temp = "";
		for (int i = 0; i < input.size(); i++) {
			if (input[i] == ' ') {
				if (op == '1') {
					operand1 = atoi(temp.c_str());
					op = ' ';
					temp = "";
				}
				else if (op == ' ') {
					op = temp[0];
					temp = "";
				}
			}
			else
				temp += input[i];
		}
		operand2 = atoi(temp.c_str());
    
		cout << operand1 << ' ' << op << ' ' << operand2 << " = ";
		if (op == '+')
			cout << operand1 + operand2;
		else if (op == '-')
			cout << operand1 - operand2;
		else if (op == '*')
			cout << operand1 * operand2;
		else if (op == '/')
			cout << operand1 / operand2;
		else if (op == '%')
			cout << operand1 % operand2;

		cout << endl;
	}
}

// 16
#include "Mystring.h"
#include <iostream>
#include <string>
using namespace std;
void test2() {
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	
	int count = 0;
	int count_alpha[26] = { 0, };

	char text[10000];
	cin.getline(text, 10000, ';');

	for (int i = 0; i < 10000; i++) {
		if (text[i] == '\0')
			break;
		if (!isalpha(text[i]))
			continue;
		char check = tolower(text[i]);
		count_alpha[check - 'a']++;
		count++;
	}
	cout << "총 알파벳 수 " << count << endl << endl;
	for (int i = 0; i < 26; i++) {
		cout << char('a' + i) << " (" << count_alpha[i] << ")  : ";
		for (int j = 0; j < count_alpha[i]; j++)
			cout << '*';
		cout << endl;
	}
}
