#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, arr[300], dp[300] = { 0, };
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];

	dp[0] = arr[0];
	dp[1] = arr[0] + arr[1];
	dp[2] = arr[2] + max(arr[0], arr[1]);
	for (int i = 3; i < n; i++) {
		dp[i] = arr[i] + max(dp[i - 3] + arr[i - 1], dp[i - 2]);
	}
	cout << dp[n - 1];
	return 0;
}