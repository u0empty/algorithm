#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int n;
int a, b;
vector<int> v[51];
vector<int> ans;

int bfs(int i) {
	int visit[51] = { 0, };
	visit[i] = 1;

	queue<pair<int, int>> q;
	q.push({ i, 0 });

	int maxi = 0;
	while (!q.empty()) {
		int now = q.front().first;
		int step = q.front().second;
		maxi = max(maxi, step);
		q.pop();

		for (int j = 0; j < v[now].size(); j++) {
			int next = v[now][j];
			if (visit[next]) continue;
			visit[next] = 1;
			q.push({ next, step + 1 });
		}
	}
	return maxi;
}

int main() {
	cin >> n;
	while (1) {
		cin >> a >> b;
		if (a == -1 && b == -1) break;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	int mini = 1e9;
	for (int i = 1; i <= n; i++) {
		int score = bfs(i);
		if (score < mini) {
			mini = score;
			ans.clear();
			ans.push_back(i);
		}
		else if (score == mini) {
			ans.push_back(i);
		}
	}

	cout << mini << " " << ans.size() << "\n";
	for (int it : ans) {
		cout << it << " ";
	}

	return 0;
}