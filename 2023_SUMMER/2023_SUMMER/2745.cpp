#include<iostream>
#include<string>
using namespace std;

int main() {
	int B;
	string N;
	int result = 0;
	int len = 0;
	int sum = 0;
	int mul = 0;
	int num = 0;
	int cnt = 0;

	cin >> N >> B;

	len = N.length();

	for (int i = len - 1; i >= 0; i--) {
		mul = 1;
		for (int j = 0; j < cnt; j++) {
			mul *= B;
		}
		cnt++;
		if (N[i] >= 65 && N[i] <= 90) {
			num = N[i] - 55;
		}
		else num = N[i] - '0';
		sum += mul * num;
	}


	cout << sum << endl;

}