#include<iostream>
using namespace std;

int main() {
	int N, V;
	int num[100] = { 0, };
	int cnt = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	cin >> V;

	for (int i = 0; i < N; i++) {
		if (num[i] == V) cnt++;
	}

	cout << cnt << '\n';

}