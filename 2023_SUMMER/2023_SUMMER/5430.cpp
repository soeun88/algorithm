#include<iostream>
using namespace std;

#include<queue>
queue<int>Xq;

int main() {
	int T, n;
	string p;
	int X[100] = { 0, };
	int pLen = 0;
	int XLen = 0;

	cin >> T;
	
	for (int i = 0; i < T; i++) {
		cin >> p;
		cin >> n;

		for (int j = 0; j < n; j++) {
			cin >> X[j];
			Xq.push(X[i]);
		}

		pLen = p.length();
		XLen = Xq.size();
		for (int k = 0; k < pLen; k++) {
			if (p[k] == 'R') {
				reverse(begin(X),end(X));
			}
			else {
				if (XLen == 0) {
					cout << "error" << endl;
					break;
				}
				else {
					Xq.pop();
				}
			}
		}

		cout << X << endl;
	}


}

