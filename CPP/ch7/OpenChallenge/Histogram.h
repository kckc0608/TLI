#ifndef HISTOGRAM_H
#define HISTOGRAM_H
#include <string>
using namespace std;
class Histogram
{
	string lyric;
	int count = 0;
	int alphabet[26] = { 0, };
public:
	Histogram(string lyric) { this->lyric = lyric; }
	Histogram& operator << (string addedLyric) { this->lyric += addedLyric; return *this; }
	Histogram& operator << (char c) { this->lyric += c; return *this; }
	void operator ! ();
};
#endif
