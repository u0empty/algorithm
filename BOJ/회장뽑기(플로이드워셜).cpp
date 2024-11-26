#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define INF 1e9;

int n;
int a, b;
int dist[51][51] = { 0, };
vector<int> ans;

int main() {
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) continue;
			dist[i][j] = INF;
		}
	}

	while (1) {
		cin >> a >> b;
		if (a == b) break;
		dist[a][b] = 1;
		dist[b][a] = 1;
	}

	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (dist[i][j] > dist[i][k] + dist[k][j]) {
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}

	int score = INF;
	for (int i = 1; i <= n; i++) {
		int maxi = 0;
		for (int j = 1; j <= n; j++) {
			maxi = max(maxi, dist[i][j]);
		}
		if (maxi < score) {
			score = maxi;
			ans.clear();
			ans.push_back(i);
		}
		else if (maxi == score) {
			ans.push_back(i);
		}
	}

	cout << score << " " << ans.size() << "\n";
	for (int it : ans) {
		cout << it << " ";
	}

	return 0;
}