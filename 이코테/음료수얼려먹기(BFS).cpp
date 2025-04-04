#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

vector<string> v(4);
queue<pair<int, int>> q;
int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };
int cnt = 0;

bool bfs(int y, int x) {
	if (v[y][x] == '1') return false;

	q.push({ y, x });
	v[y][x] = '1';

	while (!q.empty()) {
		int nowy = q.front().first;
		int nowx = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = nowy + dy[i];
			int nx = nowx + dx[i];
			
			if (ny < 0 || nx < 0 || ny >= 4 || nx >= 5) continue;
			if (v[ny][nx] == '1') continue;
			
			q.push({ ny, nx });
			v[ny][nx] = '1';
		}
	}
	return true;
}

int main() {
	for (int i = 0; i < 4; i++) cin >> v[i];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (bfs(i, j)) cnt++;
		}
	}
	cout << cnt;
	return 0;
}