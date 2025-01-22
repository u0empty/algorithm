#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, dp[100000];
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	int maxi = v[0];
	dp[0] = v[0];
	for (int i = 1; i < n; i++) {
		dp[i] = max(dp[i - 1] + v[i], v[i]);
		maxi = max(dp[i], maxi);
	}
	cout << maxi;
	return 0;
}