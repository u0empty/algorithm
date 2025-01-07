#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int n;
int arr[11], ops[4];
int maxi = INT_MIN;
int mini = INT_MAX;
bool flag;

void dfs(int idx, int ret) {
	if (idx == n - 1) {
		maxi = max(maxi, ret);
		mini = min(mini, ret);
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (ops[i] == 0) continue;
		ops[i] -= 1;
		if (i == 0) dfs(idx + 1, ret + arr[idx + 1]);
		else if (i == 1) dfs(idx + 1, ret - arr[idx + 1]);
		else if (i == 2) dfs(idx + 1, ret * arr[idx + 1]);
		else dfs(idx + 1, ret / arr[idx + 1]);
		ops[i] += 1;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 0; i < 4; i++) cin >> ops[i];
	dfs(0, arr[0]); 
	cout << maxi << "\n" << mini;
	return 0;
}