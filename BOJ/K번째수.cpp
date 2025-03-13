#include <iostream>
#include <algorithm>
using namespace std;

long long N, K, ans;

void solution() {
	long long l = 1;
	long long r = N * N;
	long long m, cnt;
	while (l <= r) {
		m = (l + r) / 2;
		cnt = 0;
		for (long long i = 1; i <= N; i++)
			cnt += min(m / i, N);
		if (cnt < K) {
			l = m + 1;
		}
		else {
			ans = m;
			r = m - 1;
		}
	}
	return;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> K;
	solution();
	cout << ans;

	return 0;
}