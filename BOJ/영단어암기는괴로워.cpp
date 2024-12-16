#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;

map<string, int> m;

bool cmp(string a, string b) {
	if (m[a] != m[b]) return m[a] > m[b];
	if (a.length() != b.length()) return a.length() > b.length();
	return a < b;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	string word;

	cin >> N >> M;
	vector<string> v;
	
	for (int i = 0; i < N; i++) {
		cin >> word;
		if (word.length() < M) continue;
		v.push_back(word);
	}

	for (int i = 0; i < v.size(); i++) {
		m[v[i]]++;
	}
	sort(v.begin(), v.end(), cmp);
	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}

	return 0;
}