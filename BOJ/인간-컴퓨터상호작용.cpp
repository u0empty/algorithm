#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	int q;
	cin >> str >> q;

	vector<vector<int>> v(26, vector<int>(str.size() + 1, 0));

	for (int i = 0; i < str.size(); i++) {
		for (int j = 0; j < 26; j++)
			v[j][i + 1] = v[j][i];
		v[str[i] - 'a'][i + 1]++;
	}

	while (q--) {
		char ch;
		int l, r;
		cin >> ch >> l >> r;
		cout << v[ch - 'a'][r + 1] - v[ch - 'a'][l] << "\n";
	}

	return 0;
}