#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[20][20];
bool used[20];
int diff = 2e9;

void dfs(int now, int cnt) {
	if (cnt == n / 2) {
		int star = 0, link = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (used[i] && used[j]) star += arr[i][j] + arr[j][i];
				else if (!used[i] && !used[j]) link += arr[i][j] + arr[j][i];
			}
		}
		diff = min(diff, abs(star - link));
		return;
	}

	for (int i = now; i < n; i++) {
		used[i] = true;
		dfs(i + 1, cnt + 1);
		used[i] = false;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];

	dfs(0, 0);
	cout << diff;
	return 0;
}