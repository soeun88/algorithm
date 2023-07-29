#include<iostream>
#include<string>
using namespace std;

int main() {
	int N;
	string time;
	int team;
	int MM, SS;
	int Ascore = 0, Bscore = 0;
	int preMM = 0, preSS = 0;
	int MM1 = 0, SS1 = 0;
	int MM2 = 0, SS2 = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> team >> time;

		MM = stoi(time.substr(0, 2));
		SS = stoi(time.substr(3, 2));

		

		if (i >= 1) {
			if (Ascore > Bscore) {
				MM1 += (MM - preMM);
				SS1 += (SS - preSS);
				if (SS1 < 0) {
					MM1--;
					SS1 += 60;
				}
				if (SS1 >= 60) {
					MM1++;
					SS1 -= 60;
				}
			}
			else if (Bscore > Ascore) {
				MM2 += (MM - preMM);
				SS2 += (SS - preSS);
				if (SS2 < 0) {
					MM2--;
					SS2 += 60;
				}
				if (SS2 >= 60) {
					MM2++;
					SS2 -= 60;
				}
			}
		}

		preMM = MM;
		preSS = SS;

		if (team == 1)Ascore++;
		else Bscore++;
	}

	if (Ascore > Bscore) {
		MM1 += (48 - preMM);
		SS1 += (0 - preSS);
		if (SS1 < 0) {
			MM1--;
			SS1 += 60;
		}
		if (SS1 >= 60) {
			MM1++;
			SS1 -= 60;
		}
	}
	else if (Bscore > Ascore) {
		MM2 += (48 - preMM);
		SS2 += (0 - preSS);
		if (SS2 < 0) {
			MM2--;
			SS2 += 60;
		}
		if (SS2 >= 60) {
			MM2++;
			SS2 -= 60;
		}
	}

	cout.width(2);
	cout.fill('0');
	cout << MM1 << ":";
	cout.width(2);
	cout.fill('0'); 
	cout << SS1 << '\n';
	cout.width(2);
	cout.fill('0');
	cout << MM2 << ":";
	cout.width(2);
	cout.fill('0'); 
	cout << SS2 << '\n';


}