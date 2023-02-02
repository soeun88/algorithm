
#include<iostream>
#include<string>
using namespace std;

int main() {
	string text;
	char t[10] = { 'a','e','i','o','u','A', 'E','I','O','U' };
	int count = 0, i = 0;

	for (int i = 0; i < 256; i++) {
		getline(cin, text);
		if (text == "#") break;
		else {
			for (int k = 0; k < 10; k++) {
				for (int j = 0; j < text.length(); j++) {
					if (text[j] == t[k]) {
						count++;
					}
				}
			}
		}
		cout << count << endl;
		count = 0;
		
	}

	


}