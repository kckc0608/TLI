#pragma once
#include <string>
using namespace std;
class Word
{
	string eng;
	string kor;
public:
	Word(string eng, string kor) { this->eng = eng; this->kor = kor; }
	string getEng() { return this->eng; }
	string getKor() { return this->kor; }
};
