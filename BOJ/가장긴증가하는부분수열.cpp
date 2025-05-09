#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];
int dp[1001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
		dp[i] = 1;

	for (int i = 1; i < n; i++)
		for (int j = 0; j < i; j++)
			if (arr[i] > arr[j])
				dp[i] = max(dp[i], dp[j] + 1);

	int maxi = 0;
	for (int i = 0; i < n; i++)
		maxi = max(maxi, dp[i]);
	cout << maxi;

	return 0;
}