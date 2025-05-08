#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int solution(vector<vector<int>> rectangle, int characterX, int characterY, int itemX, int itemY) {
    int map[102][102] = {0};
    int visited[102][102] = {0};

    for (auto& r : rectangle) {
        int x1 = r[0] * 2, y1 = r[1] * 2;
        int x2 = r[2] * 2, y2 = r[3] * 2;

        for (int i = x1; i <= x2; i++) {
            for (int j = y1; j <= y2; j++) {
                map[i][j] = 1;
            }
        }
    }

    for (auto& r : rectangle) {
        int x1 = r[0] * 2 + 1, y1 = r[1] * 2 + 1;
        int x2 = r[2] * 2 - 1, y2 = r[3] * 2 - 1;

        for (int i = x1; i <= x2; i++) {
            for (int j = y1; j <= y2; j++) {
                map[i][j] = 0;
            }
        }
    }

    queue<pair<int, int>> q;
    q.push({characterX * 2, characterY * 2});
    visited[characterX * 2][characterY * 2] = 1;

    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();

        if (x == itemX * 2 && y == itemY * 2) {
            return (visited[x][y] - 1) / 2;
        }

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || ny < 0 || nx >= 102 || ny >= 102) continue;
            if (!map[nx][ny] || visited[nx][ny]) continue;

            visited[nx][ny] = visited[x][y] + 1;
            q.push({nx, ny});
        }
    }

    return 0;
}