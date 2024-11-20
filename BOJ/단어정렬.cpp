#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
vector<string> v;

bool cmp(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else {
		return a.length() < b.length();
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	sort(v.begin(), v.end(), cmp);
	
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}

	return 0;
}