#include<iostream>
using namespace std;

int main() {
	int N;
	int sum;
	int result;


	cin >> N;

	sum = 2;
	while (N) {
		sum += sum - 1;
		N--;
	}

	result = sum * sum;

	cout << result << endl;

}