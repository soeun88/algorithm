#include<iostream>
using namespace std;

int main() {
	int num[9][9] = { 0, };
	int max = 0;
	int row = 1, col = 1;


	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> num[i][j];
		}
	}

	max = num[0][0];
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max < num[i][j]) {
				max = num[i][j];
				row = i + 1;
				col = j + 1;
			}
		}
	}

	cout << max << endl;
	cout << row << " " << col << endl;

}