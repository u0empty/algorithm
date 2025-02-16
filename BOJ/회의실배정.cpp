#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) return a.first < b.first;
	else return a.second < b.second;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	vector<pair<int, int>> v(N);
	for (int i = 0; i < N; i++) cin >> v[i].first >> v[i].second;
	sort(v.begin(), v.end(), cmp);

	int cnt = 1;
	int endTime = v[0].second;
	for (int i = 1; i < N; i++) {
		if (v[i].first < endTime) continue;
		cnt++;
		endTime = v[i].second;
	}
	cout << cnt;

	return 0;
}