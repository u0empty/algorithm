#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	int L, n, tmp;
	set<int> s;

	cin >> L;
	for (int i = 0; i < L; i++) {
		cin >> tmp;
		s.insert(tmp);
	}
	cin >> n;

	int l = 0;
	int r = 0;
	for (auto i : s) {
		if (i == n) {
			cout << "0";
			return 0;
		}
		if (i > n) break;
		l = max(l, i);
	}
	for (auto i : s) {
		if (i == n) {
			cout << "0";
			return 0;
		}
		if (i > n) {
			r = i;
			break;
		}
	}

	int ans = 0;
	for (int i = l + 1; i <= n; i++) {
		for (int j = i + 1; j < r; j++) {
			if (i < n && j < n) continue;
			ans++;
		}
	}		
	cout << ans;

	return 0;
}