#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, K;
vector<int> v;

long long solution() {
	long long l = 0;
	long long r = v[N - 1];
	long long m, sum, h = 0;
	while (l <= r) {
		m = (l + r) / 2;
		sum = 0;
		for (int i = 0; i < N; i++) {
			if (v[i] <= m) continue;
			sum += v[i] - m;
		}
		if (sum < K) {
			r = m - 1;
		}
		else {
			l = m + 1;
			h = max(h, m);
		}
	}

	return h;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> K;
	v.resize(N);
	for (int i = 0; i < N; i++) cin >> v[i];
	sort(v.begin(), v.end());

	cout << solution();

	return 0;
}