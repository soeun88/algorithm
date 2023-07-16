#include<iostream>
using namespace std;

int main() {
	int id[31] = { 0, };
	int submit[30] = { 0, };
	int ans[31] = { 0, };

	for (int i = 0; i < 28; i++) {
		cin >> submit[i];
	}

	for (int i = 0; i < 30; i++) {
		id[i] = i + 1;
	}

	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 28; j++) {
			if (submit[j] == id[i]) ans[i] = 1;
		}
	}

	for (int i = 0; i < 30; i++) {
		if (ans[i] == 0) cout << i + 1 << endl;
	}


}