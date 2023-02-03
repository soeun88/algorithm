#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

bool isRightAngle(int first, int sec, int last);
int main() {
	int first, sec, last;
	bool flag = true;
	for (; flag == true;) {
		cin >> first >> sec >> last;
		if (first == 0 && sec == 0 && last == 0) flag = false;
		else {
			if (isRightAngle(first, sec, last)) cout << "right" << endl;
			else cout << "wrong" << endl;
		}
	}

}

bool isRightAngle(int first, int sec, int last) {
	int firstP = pow(first, 2);
	int secP = pow(sec, 2);
	int lastP = pow(last, 2);
	
	if (firstP == secP + lastP) return true;
	if (secP == firstP + lastP) return true;
	if (lastP == firstP + secP) return true;
	return false;
}