#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<vector<int>> results) {
    vector<vector<bool>> win(n + 1, vector<bool>(n + 1, false));
    for (const auto& result : results) {
        int w = result[0];
        int l = result[1];
        win[w][l] = true;
    }
    
    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (win[i][k] && win[k][j]) {
                    win[i][j] = true;
                }
            }
        }
    }
    
    int answer = 0;
    for (int i = 1; i <= n; ++i) {
        int cnt = 0;
        for (int j = 1; j <= n; ++j) {
            if (i == j) continue;
            if (win[i][j] || win[j][i]) cnt++;
        }
        if (cnt == n - 1) answer++;
    }
    
    return answer;
}