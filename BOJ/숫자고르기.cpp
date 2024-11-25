#include <iostream>
#include <set>
#include <cstring>

using namespace std;

int n;
int arr[101];
bool visit[101];
bool flag;
set<int> ans;

void dfs(int start, int now) {
	if (visit[now]) {
		if (start == now) {
			ans.insert(now);
			flag = true;
		}
		return;
	}

	visit[now] = true;
	dfs(start, arr[now]);
	if (flag) ans.insert(now);
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= n; i++) {
		memset(visit, false, sizeof(visit));
		flag = false;
		dfs(i, i);
	}

	cout << ans.size() << "\n";
	for (auto it : ans) {
		cout << it << "\n";
	}
}