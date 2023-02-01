#include<iostream>
#include<string>
using namespace std;

int main() {
	char text[256];
	char t[5] = { 'a','e','i','o','u' };
	int count = 0, i = 0;

	while (text != "#") {
		cin >> text[i];
		for (int k = 0; k < 5; k++) {
			for (int j = 0; j < strlen(text); j++) {
				if (text[j] == t[k]) {
					count++;
				}
			}
		}
		cout << count << endl;
		count = 0;
		i++;
	}


}