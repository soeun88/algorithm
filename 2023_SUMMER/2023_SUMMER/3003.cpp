#include<iostream>
using namespace std;

int main() {
	int chess[6] = { 0, };
	int result[6] = { 0, };


	for (int i = 0; i < 6; i++) {
		cin >> chess[i];
	}

	result[0] = 1 - chess[0];
	result[1] = 1 - chess[1];
	result[2] = 2 - chess[2];
	result[3] = 2 - chess[3];
	result[4] = 2 - chess[4];
	result[5] = 8 - chess[5];



	for (int i = 0; i < 6; i++) {
		cout << result[i] << " ";
	}

}