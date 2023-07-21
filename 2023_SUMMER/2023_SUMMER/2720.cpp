#include<iostream>
using namespace std;

int main() {
	int T, C;
	int Q, D, N, P;


	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> C;
		Q = 0, D = 0, N = 0, P = 0;
		while (C) {
			if (C >= 25) {
				Q++;
				C -= 25;
			}
			else if (C >= 10) {
				D++;
				C -= 10;
			}
			else if (C >= 5) {
				N++;
				C -= 5;
			}
			else {
				P++;
				C -= 1;
			}
		}
		cout << Q << " " << D << " " << N << " " << P << endl;
	}


	
}