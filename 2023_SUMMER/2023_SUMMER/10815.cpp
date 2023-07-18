#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

map<int, int> m;

int main() {
	int N, M;
	int num;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		m[num] = 1;

	}

	scanf("%d", &M);

	for (int i = 0; i < M; i++) {
		scanf("%d", &num);
		if (m[num]) cout << "1 ";
		else cout << "0 ";
	}

	

}