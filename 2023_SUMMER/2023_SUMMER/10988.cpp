#include<iostream>
using namespace std;

int main() {
	string word;
	int len;
	int flag = 1;

	cin >> word;

	len = word.length();

	if (len % 2) {
		for (int i = len / 2 - 1; i >= 0; i--) {
			if (word[i] == word[len - i -1]) continue;
			else {
				flag = 0;
				break;
			}
		}
	}
	else {
		for (int i = len / 2 - 1; i >= 0; i--) {
			if (word[i] == word[len -i -1]) continue;
			else {
				flag = 0;
				break;
			}
		}

	}

	cout << flag << endl;
}


