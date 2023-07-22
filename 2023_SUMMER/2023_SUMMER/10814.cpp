#include<iostream>
#include<algorithm>
using namespace std;

class P {
public:
	int age;
	string name;
};

P* p = new P[100000];



bool compare(P a, P b) {
	return a.age < b.age;
}


int main() {
	int N;
	

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> p[i].age >> p[i].name;
	}

	stable_sort(p, p + N,compare);

	for (int i = 0; i < N; i++) {
		cout << p[i].age << " " << p[i].name << '\n';
	}

	return 0;
}