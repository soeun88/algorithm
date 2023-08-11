#include<iostream>
using namespace std;

int main() {
	int a1, a0;
	int c;
	int n;
	int result;


	cin >> a1 >> a0;
	cin >> c;
	cin >> n;


	if (a1 - c > 0) {
		cout << 0 << '\n';
	}
	else if (a1 == c) {
		cout << 1 << '\n';
	}
	else {
		result = -1 * a0 / (a1 - c);
		if (n >= result)
			cout << 1 << '\n';
		else
			cout << 0 << '\n';
	}

}