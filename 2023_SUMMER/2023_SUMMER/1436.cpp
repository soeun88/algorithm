#include<iostream>
using namespace std;

bool pandan(int num) {
	int cnt = 0;
	int result = 0;

	while (num > 0) {
		result = num % 10;
		if (result == 6) {
			cnt++;
			if (cnt == 3) {
				return true;
			}
		}
		else cnt = 0;
		num = num / 10;
	}
	if (cnt >= 3)return true;
	else return false;
}

int main() {
	int N;
	int num = 666;
	int arr[10000] = { 0, };
	int i = 0;

	cin >> N;

	while (1) {
		if (pandan(num)) {
			arr[i] = num;
			i++;
		}
		if (i == 10000) break;
		num++;
	}

	cout << arr[N - 1] << '\n';

}

