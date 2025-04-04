#include <iostream>
#include <queue>
using namespace std;

int N, M;
int map[201][201] = { 0, };
int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };

void bfs(int y, int x) {
	queue<pair<int, int>> q;
	q.push({ y, x });

	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
			if (map[ny][nx] == 0) continue;
			
			if (map[ny][nx] == 1) {
				map[ny][nx] = map[y][x] + 1;
				q.push({ ny, nx });
			}
		}
	}
	cout << map[N - 1][M - 1];
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	bfs(0, 0);
	return 0;
}