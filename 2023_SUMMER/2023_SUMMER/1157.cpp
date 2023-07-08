#include<iostream>
using namespace std;

int main() {
	string word;
	int len = 0;
	string lower = "abcdefghijklmnopqrstuvwxyz";
	string upper = "ABCDEFGHIJKLMNOPQRXTUVWXYZ";
	int count[26] = { 0, };
	char max = 'a';

	cin >> word;

	len = word.length();

	for (int j = 0; j < len; j++) {
		for (int i = 0; i < 26; i++) {
			if (word[j] == lower[i] || word[j] == upper[i])count[i]++;
		}
	}

	for (int i = 0; i < 26; i++) {

	}


}