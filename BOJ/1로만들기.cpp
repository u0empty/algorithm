#include <iostream>
#include <algorithm>
using namespace std;

int n, dp[1000000] = { 0, };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	dp[2] = 1;
	dp[3] = 1;

	cin >> n;
	for (int i = 4; i <= n; i++) {
		if (i % 6 == 0) {
			dp[i] = min(min(dp[i / 2], dp[i / 3]), dp[i - 1]) + 1;
		}
		else if (i % 2 == 0) {
			dp[i] = min(dp[i / 2], dp[i - 1]) + 1;
		}
		else if (i % 3 == 0) {
			dp[i] = min(dp[i / 3], dp[i - 1]) + 1;
		}
		else {
			dp[i] = dp[i - 1] + 1;
		}
	}
	cout << dp[n];
	return 0;
}