#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m, tmp;
vector<int> v;

int solution(int num) {
	int st = 0;
	int en = n - 1;
	int md;
	while (st <= en) {
		md = (st + en) / 2;
		if (v[md] == num) return 1;
		else if (v[md] < num) st = md + 1;
		else en = md - 1;
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		cout << solution(tmp) << "\n";
	}
	return 0;
}