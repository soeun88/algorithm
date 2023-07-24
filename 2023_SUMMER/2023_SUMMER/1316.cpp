#include<iostream>
using namespace std;

int main() {
	int N;
	string alpha = "abcdefghijklmnopqrstuvwxyz";
	string word;
	int cnt = 0;
	int wordCnt[26] = { 0, };
	int len;
	int flag;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> word;
		len = word.length();

		for (int w = 0; w < 26; w++) {
			wordCnt[w] = 0;
		}

		flag = 0;
		for (int j = 0; j < 26; j++) {
			for (int k = 0; k < len; k++) {
				if (word[k] == alpha[j])
					if (wordCnt[j] == 1) {
						if (word[k] == word[k - 1]) {
							continue;
						}
						else {
							flag = 1;
							break;
						}
					}
					else wordCnt[j] = 1;
			}
		}
		if (flag == 0) cnt++;
	}


	cout << cnt << '\n';
}