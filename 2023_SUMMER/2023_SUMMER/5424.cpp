#include<iostream>
using namespace std;

int main() {
	int T, n;
	char result[30][30] = { 0, };
	double score[30] = { 0, };
	double max = 0;

	cin >> T;

	while (T) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				 cin >> result[i][j];

			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (result[i][j] == '1')score[i] += 1;
				else if (result[i][j] == 'd')score[i] += 0.5;
			}
		}

		for (int i = 0; i < n; i++) {
			max = max > score[i] ? max : score[i];
		}

		for (int i = 0; i < n; i++) {
			if (max == score[i]) cout << i + 1 << " ";
		}
		cout << endl;

		T--;
	}

}