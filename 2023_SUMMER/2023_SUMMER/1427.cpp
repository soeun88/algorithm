#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	string N;
	int len;
	int temp;

	cin >> N;

	len = N.length();

	for (int i = 0; i < len - 1; i++) {
		for (int j = i + 1; j < len; j++) {
			if (N[j] > N[i]) {
				temp = N[j];
				N[j] = N[i];
				N[i] = temp;
			}
		}
	}

	cout << N;
	
}