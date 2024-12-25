#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	string ans = v[0];
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < v[i].length(); j++) {
			if (ans[j] == '?') continue;
			if (v[i][j] != ans[j]) ans[j] = '?';
		}
	}
	cout << ans;
	return 0;
}