#include<iostream>
using namespace std;

int main() {
	int N, M;
	int card[100] = { 0, };
	int add = 0;
	int max = 0;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> card[i];
	}

	for (int i = 0; i < N - 2; i++) {
		add = 0;
		for (int j = 1; j < N - 1; j++) {
			for (int k = 2; k < N; k++) {
				add = card[i] + card[j] + card[k];
				if (add <= M) {
					max = max > add ? max : add;
				}
			}
		}
	}

	cout << max << endl;

}