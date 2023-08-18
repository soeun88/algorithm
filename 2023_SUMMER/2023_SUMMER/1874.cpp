#include<iostream>
#include<stack>
#include<string>
using namespace std;

stack<int> s;

int main() {
	int n;
	int num[100000] = { 0, };
	int cnt = 0;
	string result = "";


	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}


	for (int i = 1; i <= n; i++) {
		s.push(i);
		result.append("+");
		while (s.empty() != true && s.top() == num[cnt]) {
			s.pop();
			result.append("-");
			cnt++;
			if (cnt == n) break;
		}
	}

	if (s.empty()) {
		for (int i = 0; i < result.length(); i++) {
			cout << result[i] << '\n';
		}
	}
	else {
		cout << "NO" << '\n';
	}
}