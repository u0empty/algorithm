#include <iostream>
#include <string>
#include <vector>
using namespace std;

int t;
string str;
vector<char> v;

void isVPS() {
	int idx = 0;
	while (idx < v.size() - 1 && !v.empty()) {
		if (v[idx] == '(' && v[idx + 1] == ')') {
			v.erase(v.begin() + idx);
			v.erase(v.begin() + idx);
			idx = 0;
		}
		else idx++;
	}

	if (v.empty()) cout << "YES\n";
	else cout << "NO\n";

	return;
}

int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> str;

		if (str[0] == ')') {
			cout << "NO\n";
		}
		else {
			v.clear();
			for (int j = 0; j < str.length(); j++) {
				v.push_back(str[j]);
			}
			isVPS();
		}
	}

	return 0;
}