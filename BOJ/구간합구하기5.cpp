#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	vector<vector<int>> arr(n + 1, vector<int>(n + 1));

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> arr[i][j];
	vector<vector<int>> v = arr;

	for (int i = 2; i <= n; i++) {
		v[1][i] += v[1][i - 1];
		v[i][1] += v[i - 1][1];
	}

	for (int i = 2; i <= n; i++)
		for (int j = 2; j <= n; j++)
			v[i][j] += v[i - 1][j] + v[i][j - 1] - v[i - 1][j - 1];

	for (int i = 0; i < m; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int ans = v[x2][y2] - v[x1 - 1][y2] - v[x2][y1 - 1] + v[x1 - 1][y1 - 1];
		cout << ans << "\n";
	}

	return 0;
}