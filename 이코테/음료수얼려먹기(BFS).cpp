#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

vector<string> v(4);
bool visited[4][5];
int cnt = 0;
int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };
queue<pair<int, int>> q;

void bfs(int y, int x) {
	q.push({ y, x });
	visited[y][x] = true;

	while (!q.empty()) {
		int nowy = q.front().first;
		int nowx = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = nowy + dy[i];
			int nx = nowx + dx[i];

			if (visited[ny][nx]) continue;
			if (ny < 0 || nx < 0 || ny >= 4 || nx >= 5) continue;
			if (v[ny][nx] == '1') continue;

			q.push({ ny, nx });
			visited[ny][nx] = true;
		}
	}
}

int main() {
	for (int i = 0; i < 4; i++) cin >> v[i];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (v[i][j] == '1') continue;
			if (!visited[i][j]) {
				bfs(i, j);
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}