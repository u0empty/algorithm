#include <iostream>
using namespace std;

#define N 1000000000

int n;
int dp[101][10];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= 9; i++) {
		dp[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0) dp[i][j] = dp[i - 1][1] % N;
			else if (j == 9) dp[i][j] = dp[i - 1][8] % N;
			else dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % N;
		}
	}
	long long sum = 0;
	for (int i = 0; i <= 9; i++) {
		sum += dp[n][i];
	}
	cout << sum % N;
	return 0;
} 