#include<iostream>
#include<map>
using namespace std;

map<string, int> m;

int main() {
	int N;
	string chat;
	int len;
	int count = 0, flag = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> chat;

		if (chat == "ENTER") {
			m.clear();
			continue;
		}

		if (m.find(chat) == m.end()) {
			m.insert({ chat,1 });
			count++;
		}

	}

	cout << count << endl;
}