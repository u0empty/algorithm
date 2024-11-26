#include <iostream>
#include <map>
#include <string>

using namespace std;

int n, m;
int cnt = 0;
string tmp;
map<string, int> name;

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		name[tmp]++;
	}
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		name[tmp]++;
		if (name[tmp] == 2) cnt++;
	}

	cout << cnt << "\n";
	for (auto it : name) {
		if (it.second == 2) {
			cout << it.first << "\n";
		}
	}

	return 0;
}