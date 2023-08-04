#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int dice[3] = { 0, };
	int result = 0;
	int m;


	for (int i = 0; i < 3; i++) {
		cin >> dice[i];
	}

	if (dice[0] == dice[1]) {
		if (dice[1] == dice[2])
			result = 10000 + dice[0] * 1000;
		else
			result = 1000 + dice[0] * 100;
	}
	else if (dice[0] == dice[2]) {
		if (dice[1] == dice[2])
			result = 10000 + dice[0] * 1000;
		else
			result = 1000 + dice[0] * 100;
	}
	else if (dice[1] == dice[2]) {
		if (dice[0] == dice[2])
			result = 10000 + dice[0] * 1000;
		else
			result = 1000 + dice[1] * 100;
	}
	else {
		m = dice[0];
		m = max({ dice[0],dice[1],dice[2] });
		result = m * 100;
	}

	cout << result << endl;
		
}