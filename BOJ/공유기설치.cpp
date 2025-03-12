#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, C, ans = 0;
vector<int> X;

void solution() {
	int l = 1;
	int r = X[N - 1] - X[0];
	int m, cnt, lastX;
	while (l <= r) {
		m = (l + r) / 2;
		cnt = 1;
		lastX = X[0];
		for (int i = 1; i < N; i++) {
			if (X[i] - lastX < m) continue;
			cnt++;
			lastX = X[i];
		}
		if (cnt < C) {
			r = m - 1;
		}
		else {
			l = m + 1;
			ans = max(ans, m);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> C;
	X.resize(N);
	for (int i = 0; i < N; i++) cin >> X[i];
	sort(X.begin(), X.end());
	solution();
	cout << ans;

	return 0;
}