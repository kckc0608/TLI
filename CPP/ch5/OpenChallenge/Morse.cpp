#include "Morse.h"
Morse::Morse() {
	alphabet[0] = ".-";
	alphabet[1] = "-...";
	alphabet[2] = "-.-.";
	alphabet[3] = "-..";
	alphabet[4] = ".";
	alphabet[5] = "..-.";
	alphabet[6] = "--.";
	alphabet[7] = "....";
	alphabet[8] = "..";
	alphabet[9] = ".----";
	alphabet[10] = "-.-";
	alphabet[11] = ".-..";
	alphabet[12] = "--";
	alphabet[13] = "-.";
	alphabet[14] = "---";
	alphabet[15] = ".--.";
	alphabet[16] = "--.-";
	alphabet[17] = ".-.";
	alphabet[18] = "...";
	alphabet[19] = "-";
	alphabet[20] = "..-";
	alphabet[21] = "...-";
	alphabet[22] = ".--";
	alphabet[23] = "-..-";
	alphabet[24] = "-.--";
	alphabet[25] = "--..";
	
	digit[0] = "-----";
	digit[1] = ".----";
	digit[2] = "..---";
	digit[3] = "...--";
	digit[4] = "....-";
	digit[5] = ".....";
	digit[6] = "-....";
	digit[7] = "--...";
	digit[8] = "---..";
	digit[9] = "----.";

	slash = "-..-.";
	question = "..--..";
	comma = "--..--";
	period = ".-.-.-";
	plus = ".-.-.";
	equal = "-...-";
}

void Morse::text2Morse(string text, string& morse) {
	for (int i = 0; i < text.size(); i++) {
		if (isalpha(text[i])) {
			text[i] = tolower(text[i]);
			morse += alphabet[text[i] - 'a'];
		}
		else if (isdigit(text[i])) {
			morse += digit[text[i] - '0'];
		}
		else if (text[i] == '/') {
			morse += slash;
		}
		else if (text[i] == '?') {
			morse += question;
		}
		else if (text[i] == ',') {
			morse += comma;
		}
		else if (text[i] == '.') {
			morse += period;
		}
		else if (text[i] == '+') {
			morse += plus;
		}
		else if (text[i] == '=') {
			morse += equal;
		}
		else if (text[i] == ' ') {
			morse += '  ';
		}

		morse += ' ';
	}
}

bool Morse::morse2Text(string morse, string& text) {
	text = "";
	string temp = "";
	bool find = false;
	if (morse[morse.size() - 1] != ' ') {
		morse += ' ';
	}

	for (int i = 0; i < morse.size(); i++) {
		if (morse[i] == ' ') {
			if (temp == "")
				temp += ' ';
			else if (temp == " ") {
				text += ' ';
				temp = "";
			}
			else {
				for (int i = 0; i < 26; i++) {
					if (alphabet[i] == temp) {
						text += char('a' + i);
						find = true;
					}
				}
				for (int i = 0; i < 10; i++) {
					if (digit[i] == temp) {
						text += to_string(i);
						find = true;
					}
				}
				if (slash == temp) {
					text += '/';
					find = true;
				}
				else if (question == temp) {
					text += '?';
					find = true;
				}
				else if (comma == temp) {
					text += ',';
					find = true;
				}
				else if (period == temp) {
					text += '.';
					find = true;
				}
				else if (plus == temp) {
					text += '+';
					find = true;
				}
				else if (equal == temp) {
					text += '=';
					find = true;
				}
				if (find) {
					temp = "";
				}
				else {
					return false;
				}
			}
		}
		else {
			temp += morse[i];
		}
	}
	return find;
}
