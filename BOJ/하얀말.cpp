#include <iostream>
#include <string>
using namespace std;

int main() {
	string s[8];
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		cin >> s[i];
		for (int j = 0; j < 8; j++)
			if ((i + j) % 2 == 0 && s[i][j] == 'F')
				cnt++;
	}
	cout << cnt;
	return 0;
}