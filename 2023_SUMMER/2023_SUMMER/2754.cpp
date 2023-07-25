#include<iostream>
using namespace std;

int main() {
	string score;
	double s = 0.0;

	cin >> score;

	if (score == "A+") s = 4.3;
	else if (score == "A0") s = 4.0;
	else if (score == "A-") s = 3.7;
	else if (score == "B+") s = 3.3;
	else if (score == "B0") s = 3.0;
	else if (score == "B-") s = 2.7;
	else if (score == "C+") s = 2.3;
	else if (score == "C0") s = 2.0;
	else if (score == "C-") s = 1.7;
	else if (score == "D+") s = 1.3;
	else if (score == "D0") s = 1.0;
	else if (score == "D-") s = 0.7;
	else s = 0.0;

	cout.precision(1);
	cout << fixed;
	cout << s;
}