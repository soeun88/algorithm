#include<iostream>
using namespace std;

int main() {
	int N, K;
	int cnt = 0;
	int result = 0;


	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			result = i;
			cnt++;
		}
		if (cnt == K)break;
	}

	if (cnt != K) result = 0;

	cout << result << '\n';;

}