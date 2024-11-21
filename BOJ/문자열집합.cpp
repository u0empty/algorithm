#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >> m;
	
	vector<string> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	sort(s.begin(), s.end());

	int cnt = 0;
	for (int i = 0; i < m; i++) {
		string str;
		cin >> str;
		if (binary_search(s.begin(), s.end(), str)) cnt++;
	}

	cout << cnt;
	
	return 0;
}
