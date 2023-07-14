#include<iostream>
#include<queue>
using namespace std;

queue<int> q;

int main() {
	int N;
	int len;
	int count = 1;
	int result;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	len = q.size();

	while (len != 1) {
		q.pop();
		if (len == 2) break;
		else {
			count = q.front();
			q.pop();
			q.push(count);
			len = q.size();
		}
	}

	cout << q.front() << endl;


}