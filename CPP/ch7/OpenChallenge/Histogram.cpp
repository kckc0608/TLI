#include "Histogram.h"
#include <iostream>
using namespace std;
void Histogram::operator!() {
	cout << lyric << endl;
	for (int i = 0; i < lyric.length(); i++) {
		if (isalpha(lyric[i])) {
			char c = tolower(lyric[i]);
			alphabet[c - 'a']++;
			count++;
		}
	}

	cout << "총 알파벳 수 " << count << endl;

	for (int i = 0; i < 26; i++) {
		cout << (char)('a' + i) << ':';
		for (int j = 0; j < alphabet[i]; j++)
			cout << '*';
		cout << endl;
	}
}
