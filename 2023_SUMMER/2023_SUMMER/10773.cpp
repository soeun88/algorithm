#include<iostream>
#include<stack>
using namespace std;

stack<int> s;

int main() {
	int K;
	int arr[100000] = { 0, };
	int sum = 0;
	int len;

	cin >> K;

	for (int i = 0; i < K; i++) {
		cin >> arr[i];
		if (arr[i] == 0) {
			s.pop();
		}
		else {
			s.push(arr[i]);
		}
	}

	len = s.size();

	for (int i = 0; i < len; i++) {
		sum += s.top();
		s.pop();
	}
	
	cout << sum << endl;
}