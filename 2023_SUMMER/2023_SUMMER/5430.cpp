#include<iostream>
#include<algorithm>
#include<deque>
#include<string>
using namespace std;

deque<int>Xq;

int main() {
	int T, n;
	string p;
	int pLen = 0, XLen = 0;
	string X, num;
	string answer;
	int cnt, size = 0;
	int R, D;

	cin >> T;
	cin.ignore();

	for (int i = 0; i < T; i++) {
		cin >> p;
		cin >> n;
		cin >> X;

		num = "";
		XLen = X.length();
		for (int j = 1; j < XLen; j++) {
			if (X[j] == ']' || X[j] == ',') {
				if (!num.empty()) {
					Xq.push_back(stoi(num));
					num = "";
				}
			}
			else num += X[j];
		}

		pLen = p.length();
		R = 0;
		D = 0;
		for (int k = 0; k < pLen; k++) {
			if (p[k] == 'R') {
				if (R == 0) R = 1;
				else R = 0;
			}
			else {
				if (Xq.empty()) {
					cout << "error" << endl;
					D = 1;
					break;
				}
				else {
					if (R == 0) Xq.pop_front();
					else Xq.pop_back();
				}
			}
		}

		if (D != 1) {
			cnt = 0;
			cout << '[';
			while (!Xq.empty()) {
				if (cnt != 0) cout << ',';
				if (R == 0) {
					cout << Xq.front();
					Xq.pop_front();
				}
				else {
					cout << Xq.back();
					Xq.pop_back();
				}
				cnt++;
			}
			cout << ']' << endl;
		}
	}
}




