#include "Mystring.h"
#include <iostream>
#include <string>
#include "Histogram.h"
using namespace std;

void test2() {
	Histogram song("Wise men say, \nonly fools rush in But I can't help, '\n");
	song << "falling" << " in love with you." << " - by ";
	song << 'k' << 'i' << 'm';
	!song; // 히스토그램 그리기
}
