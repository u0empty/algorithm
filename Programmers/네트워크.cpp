#include <vector>
using namespace std;

vector<bool> used;

void dfs(vector<vector<int>> com, int now) {
    for (int next = 0; next < com.size(); ++next) {
        if (!com[now][next]) continue;
        if (used[next]) continue;
        used[next] = true;
        dfs(com, next);
    }
}

int solution(int n, vector<vector<int>> computers) {
    used.resize(n, false);
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (used[i]) continue;
        used[i] = true;
        dfs(computers, i);
        cnt++;
    }
    return cnt;
}