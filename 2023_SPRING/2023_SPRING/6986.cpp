//미완
#include<iostream>
using namespace std;

int main() {
	int N, K;
	double score[100001] = {};
	double trimmed[100001] = {};
	double adjusted[100001] = {};
	double trim = 0, adjust = 0;

	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> score[i];
	}

	//절사평균
	for (int i = 0; i < K; i++) {
		score[i] = score[i + 1];
	}

	for (int i = 0; i < N - K; i++) {
		trim += score[i];
	}
	trim /= (N - 2 * K);


	//보정평균
	for (int i = 0; i < K; i++) {
		score[i] = score[K];
		score[N - i] = score[N - K];
	}

	for (int i = 0; i < N; i++) {
		adjust += score[i];
	}
	adjust /= N;

	cout << trim << endl;
	cout << adjust << endl;
}

