#include "Mystring.h"
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;
void test2() {
	cout << "------------------------------------\n";
	cout << "지금부터 행맨 게임을 시작합니다\n";
	cout << "------------------------------------\n";

	vector<string> v;
	fstream fin("words.txt", ios::in);
	if (!fin) { cout << "words.txt open failed"; }
	
	string word;
	while (getline(fin, word)) {
		v.push_back(word);
	}

	srand((unsigned)time(0));
	int difficulty = 2;

	while (true) {
		int fail_count = 0;
		int n = rand() % v.size(); // 단어 선택
		string answer = v[n];

		// 단어 길이 중 2개 인덱스 선택해서 해당 인덱스의 문자 숨기기
		// while문 돌면서 정답 유추 시도
		// 실패 카운트 세다가 5개 넘으면 break; 또는 정답 맞추면 break;

		cout << "Next(y/n)?";
		char c; cin >> c;
		if (c == 'n')
			break;
	}
}
