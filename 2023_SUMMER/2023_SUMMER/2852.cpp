//¹Ì¿Ï
#include<iostream>
#include<string>
using namespace std;

int main() {
	int N;
	int team[100] = { 0, };
	string time[100] = {};
	string MM[100] = {}, SS[100] = {};
	int MM1 = 0, SS1 = 0, MM2 = 0, SS2 = 0;
	int flag1 = 0, flag2 = 0;


	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> team[i] >> time[i];
	}

	for (int i = 0; i < N; i++) {
		MM[i] = time[i].substr(0, 2);
		SS[i] = time[i].substr(3, 2);
	}

	for (int i = 0; i < N; i++) {
		if (N == 1) {
			if (team[i] == 1) {
				if (SS[i] == "00") {
					MM1 = 48 - stoi(MM[i]);
				}
				else {
					MM1 = 48 - stoi(MM[i]) - 1;
					SS1 = 60 - stoi(SS[i]);
				}
			}
			else {
				if (SS[i] == "00") {
					MM2 = 48 - stoi(MM[i]);
				}
				else {
					MM2 = 48 - stoi(MM[i]) - 1;
					SS2 = 60 - stoi(SS[i]);
				}
			}
		}
		else {
			if (team[i] == 1) {
				flag1++;
				if (SS[i] == "00") {
					MM1 += (stoi(MM[i + 1]) - stoi(MM[i]));
				}
				else {
					MM1 += (stoi(MM[i + 1]) - stoi(MM[i]) - 1);
					SS1 += (stoi(SS[i + 1]) - stoi(SS[i]));
					if (SS1 < 0) SS1 += 60;
				}
			}
			else {
				flag2++;
				if (SS[i] == "00") {
					MM2 += (stoi(MM[i + 1]) - stoi(MM[i]));
				}
				else {
					MM2 += (stoi(MM[i + 1]) - stoi(MM[i]) - 1);
					SS2 += (stoi(SS[i + 1]) - stoi(SS[i]));
					if (SS2 < 0)SS2 += 60;
				}
			}
		}
	}


	cout.width(2);
	cout.fill('0');
	cout << MM1;
	cout.width(1);
	cout << ':';
	cout.width(2);
	cout.fill('0');
	cout << SS1;
	cout << '\n';
	cout.width(2);
	cout.fill('0');
	cout << MM2;
	cout.width(1);
	cout << ':';
	cout.width(2);
	cout.fill('0');
	cout << SS2;
	cout << '\n';
}