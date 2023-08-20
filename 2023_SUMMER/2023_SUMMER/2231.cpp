#include<iostream>
using namespace std;

int main() {
	int N;
	int M = 1;
	int cal = 0;
	int tmp = 0;

	cin >> N;

	while (1) {
		cal = 0;
		cal += M;
		tmp = M;
		while (tmp > 0) {
			cal += tmp % 10;
			tmp /= 10;
		}
		if (cal == N) break;
		else if (M > N) {
			M = 0;
			break;
		}
		else {
			M++;
			continue;
		}
	}

	cout << M << '\n';

}