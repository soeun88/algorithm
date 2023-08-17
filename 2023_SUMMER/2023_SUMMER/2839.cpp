#include<iostream>
using namespace std;

int main() {
	int N;
	int result = 0;
	int cnt = 0;
	int a = 0;


	cin >> N;

	while (1) {
		a = N - 3 * cnt;
		if (a % 5 == 0) {
			result = cnt + (a/ 5);
			break;
		}
		else if (a < 0) {
			result = -1;
			break;
		}
		else {
			cnt++;
		}
	}


	cout << result << '\n';


}