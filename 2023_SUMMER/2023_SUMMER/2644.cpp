//¹Ì¿Ï
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> map[100];

int visit[1000];
void BFS(int start) {
	queue<int> q;

	q.push(start);
	
	while (!q.empty()) {
		int node = q.front();
		q.pop();

	}


}

int main() {
	int n;
	int p1, p2;
	int m;
	int node1, node2;
	int cnt = 0;


	cin >> n;
	cin >> p1 >> p2;
	cin >> m;


	for (int i = 0; i < m; i++) {
		cin >> node1 >> node2;
		map[node1].push_back(node2);
	}




}