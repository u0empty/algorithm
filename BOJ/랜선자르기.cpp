#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int K, N;
int len = 0;
vector<int> v;

void solution() {
	long long l = 1;
	long long r = v[K - 1];
	long long m, cnt;
	while (l <= r) {
		m = (l + r) / 2;
		cnt = 0;
		for (int i = 0; i < K; i++)
			cnt += v[i] / m;
		if (cnt < N)
			r = m - 1;
		else if (cnt >= N && m > len) {
			l = m + 1;
			len = m;
		}
	}
	return;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> K >> N;
	v.resize(K);
	for (int i = 0; i < K; i++)
		cin >> v[i];
	sort(v.begin(), v.end());

	solution();
	cout << len;
	
	return 0;
}