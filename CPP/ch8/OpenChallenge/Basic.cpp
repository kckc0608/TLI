//기본적으로 파생클래스 객체를, 기본클래스 객체배열에 넣는게 안되더라. (업캐스팅하더라도)
// 기본클래스 포인터 객체를 만든다음, 업캐스팅한 포인터를 저장하고, 정보를 가져올 땐, 다운캐스팅해서 정보를 가져와야 한다.

#include "Mystring.h"
#include <iostream>
#include <string>
#include "ConversationBook.h"
#include "CompactDisc.h"
using namespace std;

void test2() {
	int select, products_size = 0;
  
	Product** products = new Product*[100]; // Product 객체 포인터 배열을 만든다.

	ConversationBook book, *pbook; // 객체를 하나 생성하면 이렇게 만들고
	pbook = &book; // 포인터를 저장한다.
	pbook->setLang("kor"); // 포인터를 활용해서 정보를 저장한 다음
	products[0] = (Product*)pbook; // 포인터 배열에 업캐스팅한 포인터를 저장한다.

	cout << ((ConversationBook*)products[0])->getLang(); // 배열에서 정보를 불러올 땐 다운캐스팅해서 포인터로 정보를 가져온다.
  
  // 이것만 이해하면, 나머지 구현은 그냥 노가다라 굳이 구현하지 않음.
}
