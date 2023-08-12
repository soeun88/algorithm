#include<iostream>
using namespace std;

int main() {
	int a, b, c, d, e, f;
	int x, y;

	cin >> a >> b >> c >> d >> e >> f;

	x = (b * f - c * e) / (b * d - a * e);
	y = (a * f - c * d) / (a * e - b * d);
	
	cout << x << " " << y << '\n';


}