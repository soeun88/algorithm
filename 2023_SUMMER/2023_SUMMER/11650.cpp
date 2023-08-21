//미완 -> 시간초과
#include<iostream>
using namespace std;

int main() {
	int N;
	int x[100000] = { 0, }, y[100000] = { 0, };
	int temp = 0;


	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x[i] >> y[i];
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = i; j < N; j++) {
			if (x[i] >= x[j]) {
				if (y[i] > y[j]) {
					temp = x[i];
					x[i] = x[j];
					x[j] = temp;

					temp = y[i];
					y[i] = y[j];
					y[j] = temp;
				}
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << x[i] << " " << y[i] << '\n';
	}

}