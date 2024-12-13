#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	string str;
	int n;
	
	cin >> n;
	unordered_map<string, int> m(n);

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "ENTER") {
			m.clear();
		}
		else {
			m[str]++;
			if (m[str] == 1) cnt++;
		}
	}
	cout << cnt;

	return 0;
}