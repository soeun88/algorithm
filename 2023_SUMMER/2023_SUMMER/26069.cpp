#include<iostream>
#include<map>
using namespace std;

map<string, int> nameM;

int main() {
	int N;
	string name1, name2;
	int cnt = 0;

	
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> name1 >> name2;
		if (name1 == "ChongChong") {
			nameM.insert({ name1,1 });
		}
		else if (name2 == "ChongChong") {
			nameM.insert({ name2,1 });
		}
		if (nameM[name1]) nameM[name2] = 1;
		if (nameM[name2]) nameM[name1] = 1;
	}

	for (auto& val : nameM) {
		if (val.second == 1) cnt++;
	}

	cout << cnt << '\n';

}