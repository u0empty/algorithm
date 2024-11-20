#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
vector<pair<pair<int, string>, int>> v;

bool cmp(pair<pair<int, string>, int> a, pair<pair<int, string>, int> b) {
	if (a.first.first == b.first.first) {
		return a.second < b.second;
	}
	else {
		return a.first.first < b.first.first;
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int age;
		string name;
		cin >> age >> name;
		v.push_back({ { age, name }, i });
	}
	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < n; i++) {
		cout << v[i].first.first << " " << v[i].first.second << "\n";
	}

	return 0;
}