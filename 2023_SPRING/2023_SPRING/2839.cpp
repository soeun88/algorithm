#include<iostream>
using namespace std;

int main() {
	int N, result;

	cin >> N;

	if (N % 5) result = N / 5;
	else {
		if ((N % 5) % 3) result = N / 5 + (N % 5) / 3;
		else if (N % 3) result = N / 3;
		else result = -1;
	}

	cout << result << endl;

}

