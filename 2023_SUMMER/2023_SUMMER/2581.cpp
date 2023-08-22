#include<iostream>
using namespace std;

bool isPrime(int num) {
	bool result = false;

	if (num == 1) return false;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) return result;
	}
	return result = true;
}

int main() {
	int M, N;
	int min = -1;
	int sum = 0;
	int flag = 0;

	cin >> M;
	cin >> N;

	for (int i = M; i <= N; i++) {
		if (isPrime(i)) {
			if (flag == 0) {
				min = i;
				flag = 1;
			}
			sum += i;
		}
	}


	if (min != -1) {
		cout << sum << '\n';
		cout << min << '\n';
	}
	else cout << min << '\n';

}