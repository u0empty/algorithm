#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int N, M;
vector<string> map;
bool visited[201][201];
int path[201][201] = { 0, };
int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };

void bfs(int y, int x) {
	queue<pair<int, int>> q;
	visited[y][x] = true;
	path[y][x] = 1;
	q.push({ y, x });

	while (!q.empty()) {
		int nowy = q.front().first;
		int nowx = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = nowy + dy[i];
			int nx = nowx + dx[i];

			if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
			if (visited[ny][nx]) continue;
			if (map[ny][nx] == '0') continue;
			
			visited[ny][nx] = true;
			path[ny][nx] = path[nowy][nowx] + 1;
			q.push({ ny, nx });
		}
	}
}

int main() {
	cin >> N >> M;
	map.resize(N);
	for (int i = 0; i < N; i++) cin >> map[i];
	
	bfs(0, 0);
	cout << path[N - 1][M - 1];

	return 0;
}