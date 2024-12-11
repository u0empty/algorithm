#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, d;
	cin >> n;

	int mini = 1e9;
	int maxi = -1;
	for (int i = 0; i < n; i++) {
		cin >> d;
		mini = min(mini, d);
		maxi = max(maxi, d);
	}
	unsigned int ans = mini * maxi;
	cout << ans;

	return 0;
}