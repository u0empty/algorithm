#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	map<string, string, greater<>> m;
	string name, act;
	for (int i = 0; i < n; i++) {
		cin >> name >> act;
		m[name] = act;
	}

	for (auto it : m) {
		if (it.second == "enter") cout << it.first << "\n";
	}

	return 0;
}