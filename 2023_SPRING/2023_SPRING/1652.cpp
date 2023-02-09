//¹Ì¿Ï
#include<iostream>
using namespace std;

int main() {
	int N;
	char arr[101][101];
	string s, tmp;
	int count = 0, flag = 1;
	int a = 0, b = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> s;
		for (int j = 0; j < N; j++) {
			arr[i][j] = s[j];
		}

	}


	for (int i = 0; i < N; i++) {
		flag = 1;
		for (int j = 0; j < N; j++) {
			if (flag == 1) {
				if (arr[i][j] == '.') {
					count++;
					if (count >= 2) {
						a++;
						flag = 0;
						break;
					}
				}
				else {
					count = 0;
				}
			}
		}
		
	}

	count=0;
	for (int i = 0; i < N; i++) {
		flag = 1;
		for (int j = 0; j < N; j++) {
			if (flag == 1) {
				if (arr[j][i] == '.') {
					count++;
					if (count >= 2) {
						b++;
						flag = 0;
						break;
					}
				}
				else {
					count = 0;
				}
			}
		}

	}


	
	cout << a << " " << b << endl;


}