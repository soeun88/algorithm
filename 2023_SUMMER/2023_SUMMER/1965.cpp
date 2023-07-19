#include<iostream>
using namespace std;

int main() {
	int n;
	int box[1001] = { 0, };
	int dp[1001] = { 0, };
	int max = 0;


	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> box[i];
		dp[i] = 1;
	}


	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			if (box[j] < box[i] && dp[i] < dp[j] + 1) {
				dp[i] = dp[j] + 1;
			}
			max = max > dp[i] ? max : dp[i];
		}
	}

	cout << max;



}