// 1. C++ 응용프로그램이 실행을 시작하는 함수의 원형
int main(int argc, char* argv[]); // 답지에는 int main() 으로 표기

// 2. 3
// C++ 표준에서 정한 main함수의 return 타입은 int이다. 0이 아닌 값을 리턴할 수 있다.
// void 타입을 쓸 수도 있지만, 표준이 아니기에 일부 컴파일러에서 컴파일이 되지 않을 수 있다.
// return문은 반드시 main이 갖고 있어야 하지만, c++에서 이를 생략해도 main이 종료할 때 자동으로 return 0; 이 실행된다.

// 부모 프로그램이 자식프로그램의 main() 함수가 리턴한 값을 보고 상태를 알 수 있기에, 프로그램의 설계단계에서 리턴 정수값의 의미를 정한다.
// 따로 부모프로그램이 없는 경우, 부모는 운영체제이며, 운영체제와 프로그램 사이에는 특별한 관계가 없어 어떤 값을 리턴해도 의미가 없다.

// 3. 
return 0;

// 4. 
int a;  // c 컴파일러에서는 변수를 선언과 동시에 반드시 초기화 해야하므로 컴파일 오류가 발생한다.
a = 4;
int square = a * a;

// 5.
I love C++
I love programming

// 6
using namespace std;

// 7
#include <iostream> // ; 을 붙이면 안된다.
using namespace std; // ; 를 붙여야한다.
std::cin >> name; // cin 객체는 << 연산자가 없다.
std::cout << 1 << 2 << 'a' << "hello" << "\n"; // std:cout 대신 std::cout 으로 써야한다.

// 8
using std::cin; // 과 같이 선언하는 것은 문제가 없다. std 이름공간의 일부 함수를 가져올 수 있다.
int year = 1; // 문제 없음
int n=1; cout >> n+200; // >> 를 << 으로 고쳐야 함.
int year = 2014; cout << 2014 + "년"; // 정수와 문자열 간의 덧셈연산은 정의되어 있지 않다.

// 9
#include "myheader.h"

// 10
O
O
O
X // char name[] = "C++"; 배열의 크기는 널문자를 포함하여 4이다.
X // cin >> name 을 하면 공백문자를 포함하여 입력을 받을 수 없다.

// 11
#include <cstring>

// 12
Kitae님 환영합니다.
Kitae님 환영합니다. // Kitae Hwang 을 입력해도 공백에 의해 구분된 문자열은 저장되지 않는다.

// 13
cin.getline(buf, 100, ';');
// buf 는 char buf[100] 일 것이며, 최대 99개의 문자를 읽어 buf[] 배열에 저장한다.
// 입력도중 ';' 을 만나면 입력을 종료하고, 마지막에 널문자를 넣고 리턴한다.
// 하지만 ';'는 생략할 수 없다. 디폴트 값이 '\n' 이기 때문이다.

// 14. 1
cin >> buf; // 공백을 포함한 입력을 cin은 할 수 없다.

// 15
namespace;

// 16
std;

// 17
std; // C++ 표준에서 입출력을 위한 클래스, 함수, 객체들이 포함된 이름공간이다. (C++표준 라이브러리가 모두 선언된 이름공간이므로)

// 18
<iostream>

// 19
cout << age << pDept;

// 20
#include <iostream>
using namespace std;
int main() {
  for (int n = 0; n < 4; n++) {
    for (int j = 0; j <= n; j++)
      cout << "*";
  }
}
