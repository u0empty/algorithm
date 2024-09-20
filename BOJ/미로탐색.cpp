#include <iostream>
#include <string>
#include <queue>

using namespace std;

struct Node {
    int y, x;
};
queue<Node> q;

int n, m;
int used[101][101];
string map[101];
int dy[] = { -1, 1, 0, 0 };
int dx[] = { 0, 0, -1, 1 };

void input() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> map[i];
}

void bfs(int y, int x) {
    q.push({ y, x });
    used[y][x] = 1;

    while (!q.empty()) {
        Node now = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int ny = now.y + dy[i];
            int nx = now.x + dx[i];

            if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if (map[ny][nx] == '0') continue;
            if (used[ny][nx] != 0) continue;

            q.push({ ny, nx });
            used[ny][nx] = used[now.y][now.x] + 1;
        }
    }
}

int main() {
    input();

    bfs(0, 0);
    cout << used[n - 1][m - 1];

    return 0;
}