#include<iostream>
#include<string>
using namespace std;

int main() {
	string word;
	int len, n;
	int count[26] = { 0 };
	int index = 0, max = 0;
	int flag = 0;

	cin >> word;

	len = word.length();

	for (int i = 0; i < len; i++) {
		n = word.at(i);
		if (n < 97) count[n - 65]++;
		else count[n - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		if (count[i] > max) {
			max = count[i];
			index = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (count[i] == max) {
			flag++;
			if (flag >= 2) {
				cout << '?' << endl;
				return 0;
			}
		}
	}


	cout << (char)(index + 65) << endl;

	return 0;
}