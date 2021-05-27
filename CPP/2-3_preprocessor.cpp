// 전처리기에 대한 내용 정리

// 컴파일시 헤더파일 선언문 위치(#include) 에 해당 헤더파일 내용을 삽입한다.
// 만약 헤당 헤더파일이 또 다른 헤더파일을 include 하고 있다면 위 과정을 반복한다.
// 이를 '헤더파일의 확장' 이라고 하며, 이 과정이 끝나면 확장된 상태의 cpp 파일이 컴파일 된다.

// <>로 선언된 헤더파일은 컴파일러가 설치된 폴더의 include 폴더에 들어있다.
// 표준 C++ 헤더파일은 확장자가 없다. 이 헤더파일들은 std의 namespace를 사용하는 것이 일반적이다.
// 비주얼 스튜디오에서 c++이 c라이브러리 함수를 가져와 사용하는 것 (ex. string.h)은 가능하지만, 표준이 아니므로 주의가 필요하다.
// <string.h> 보다 <cstring> 을 사용하는 것이 표준이다.

// "" 으로 선언된 헤더파일은 개발자 프로젝트폴더나 개발자가 컴파일 옵션으로 지정한 include 폴더에서 헤더파일을 찾는다.

// 헤더파일에는 함수의 선언(원형)만 들어있으며, 함수 호출시 호출을 정확하게 했는지 판단하는데에 사용된다.

// #include<iostream>
// cin. cout 은 iostream에 선언된 '객체'이다.
// istream cin / ostream cout 으로 선언되어 있다.
