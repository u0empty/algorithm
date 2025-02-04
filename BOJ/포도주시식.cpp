#include <iostream>
#include <algorithm>
using namespace std;

int gr[10001];
int dp[10001];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> gr[i];

	dp[0] = gr[0];
	dp[1] = gr[0] + gr[1];
	dp[2] = max({ dp[1], gr[0] + gr[2], gr[1] + gr[2] });
	for (int i = 3; i < n; i++)
		dp[i] = max({ dp[i - 1], dp[i - 3] + gr[i - 1] + gr[i], dp[i - 2] + gr[i] });

	cout << dp[n - 1];

	return 0;
}