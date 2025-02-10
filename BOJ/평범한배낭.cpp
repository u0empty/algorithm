#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	vector<int> dp(k + 1, 0); // dp[w] = 무게 w를 담을 때 얻을 수 있는 최대 가치
	for (int i = 0; i < n; i++) {
		int w, v;
		cin >> w >> v;
		for (int j = k; j >= w; j--) {
			dp[j] = max(dp[j], dp[j - w] + v);
		}
	}
	cout << dp[k];

	return 0;
}