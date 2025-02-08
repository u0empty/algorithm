#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int dp[101]; // dp[i]: v[i].second로 끝나는 증가하는 수열의 길이

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	vector<int> dp(n, 1);

	for (int i = 0; i < n; i++)
		cin >> v[i].first >> v[i].second;

	sort(v.begin(), v.end());

	for (int i = 1; i < v.size(); i++) {
		for (int j = 0; j < i; j++) {
			if (v[i].second > v[j].second) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	int maxi = 0;
	for (int i = 0; i < dp.size(); i++) {
		maxi = max(maxi, dp[i]);
	}
	
	int ans = n - maxi;
	cout << ans;

	return 0;
}