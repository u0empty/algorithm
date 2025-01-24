#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, maxi = 0;
	int dp[500][500] = { 0, };

	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j <= i; j++)
			cin >> dp[i][j];

	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0) dp[i][j] = dp[i - 1][0] + dp[i][j];
			else if (i == j) dp[i][j] = dp[i - 1][j - 1] + dp[i][j];
			else dp[i][j] = dp[i][j] + max(dp[i - 1][j - 1], dp[i - 1][j]);
		}
	}
	
	for (int i = 0; i < n; i++) {
		maxi = max(maxi, dp[n - 1][i]);
	}
	cout << maxi;
	return 0;
}