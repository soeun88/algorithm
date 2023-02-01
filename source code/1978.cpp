#include<iostream>
using namespace std;

bool isPrime(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0) return false;
	}
	return true;
}

int main() {
	int N, input, count = 0, i, testNum;
	int num[100] = { 0, };

	cin >> N;

	for (i = 0; i < N; i++) {
		cin >> input;
		num[i]=input;
	}

	for (i = 0; i < N; i++) {
		if (num[i] == 1) continue;
		else {
			if (isPrime(num[i])) count++;
		}
	}

	cout << count;

}