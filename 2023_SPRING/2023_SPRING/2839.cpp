//¹Ì¿Ï
#include<iostream>
using namespace std;

int main() {
	int N, result;

	cin >> N;

	if (N % 5==0) result = N / 5;
	else {
		if ((N % 5) % 3==0) result = N / 5 + (N % 5) / 3;
		else if (N % 3==0) result = N / 3;
		else result = -1;
	}



	cout << result << endl;

}


