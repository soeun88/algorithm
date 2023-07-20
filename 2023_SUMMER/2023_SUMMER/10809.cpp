#include<iostream>
using namespace std;

int main() {
	string S;
	string alpha = "abcdefghijklmnopqrstuvwxyz";
	int len;
	int cnt[26] = { 0, };


	cin >> S;


	for (int i = 0; i < 26; i++) {
		cnt[i] = -1;
	}

	len = S.length();
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 26; j++) {
			if (S[i] == alpha[j] && cnt[j] == -1) cnt[j] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << cnt[i] << " ";
	}
	cout << endl;


}
