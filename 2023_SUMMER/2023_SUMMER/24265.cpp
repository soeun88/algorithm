#include<iostream>
using namespace std;

int main() {
	long long n;
	long long result = 0;

	cin >> n;
	
	
	for (int i = 1; i < n; i++) {
		result += i;
	}

	cout << result << '\n' << 2 << '\n';
	
}