#include<vector>
#include<queue>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int solution(vector<vector<int>> maps) {
    int n = maps.size();
    int m = maps[0].size();
    
    vector<vector<int>> used(n, vector<int>(m, 0));
    queue<pair<int, int>> q;
    
    q.push({0, 0});
    used[0][0] = true;
    
    while(!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        
        if (y == n - 1 && x == m - 1) {
            return used[n - 1][m - 1];
        }
        
        for (int i = 0; i < 4; ++i) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if (maps[ny][nx] == 0) continue;
            if (used[ny][nx]) continue;
            
            used[ny][nx] = used[y][x] + 1;
            q.push({ny, nx});
        }
    }
    
    return -1;
}