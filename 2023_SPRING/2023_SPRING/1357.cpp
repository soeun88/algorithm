#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int Rev(int X) {
	int result;
	string strX = to_string(X);
	reverse(strX.begin(), strX.end());
	result = stoi(strX);
	return result;
}

int main() {
	int X, Y;

	cin >> X >> Y;

	cout << Rev(Rev(X) + Rev(Y)) << endl;
}