#include<iostream>
using namespace std;

int main() {
	int N;
	int T[6] = { 0, }, P[1001] = { 0, };
	int DP[15] = { 0, };
	int day;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> T[i] >> P[i];
	}

	for (int i = N-1; i >= 0; i--) {
		day = i + T[i];
		if (day > N) {
			DP[i] = DP[i + 1];
		}
		else {
			DP[i] = DP[i + 1] > DP[day] + P[i] ? DP[i + 1] : DP[day] + P[i];
		}
	}

	cout << DP[0];


}