#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	map<string, int> pom;
	vector<string> pov;
	string str;
	for (int i = 1; i <= n; i++) {
		cin >> str;
		pom[str] = i;
		pov.push_back(str);
	}

	for (int i = 0; i < m; i++) {
		cin >> str;
		if (isdigit(str[0])) {
			cout << pov[stoi(str) - 1] << "\n";
		}
		else {
			cout << pom.find(str)->second << "\n";
		}
	}

	return 0;
}