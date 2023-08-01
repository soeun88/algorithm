#include<iostream>
using namespace std;

int main() {
	int N, k;
	int x[1000] = { 0, };
	int temp = 0;

	cin >> N >> k;

	for (int i = 0; i < N; i++) {
		cin >> x[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (x[j+1] > x[j]) {
				temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}


	cout << x[k - 1] << '\n';
}