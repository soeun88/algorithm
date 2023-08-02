#include<iostream>
using namespace std;

int main() {
	int n;
	int div[100000] = { 0, };
	int cnt;
	int sum;


	while (1) {
		cin >> n;

		if (n == -1) break;

		cnt = 0;
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				div[cnt] = i;
				cnt++;
			}
		}

		sum = 0;
		for (int i = 0; i < cnt; i++) {
			sum += div[i];
		}

		if (sum == n) {
			cout << n << " = ";
			for (int i = 0; i < cnt - 1; i++) {
				cout << div[i] << " + ";
			}
			cout << div[cnt - 1] << endl;
		}
		else {
			cout << n << " is NOT perfect." << endl;
		}

	}


}