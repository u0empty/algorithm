#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    vector<vector<int>> map(n, vector<int>(n, n));
    int x1 = left / n;
    int y1 = left % n;
    int x2 = right / n;
    int y2 = right % n;

    for (int t = n - 1; t > 0; t--) {
        for (int i = 0; i < t; i++) {
            for (int j = 0; j < t; j++) {
                map[i][j] = t;
            }
        }
    }

    for (int i = y1; i < n; i++) {
        answer.push_back(map[x1][i]);
    }
    for (int i = x1 + 1; i < x2; i++) {
        for (int j = 0; j < n; j++) {
            answer.push_back(map[i][j]);
        }
    }
    for (int i = 0; i <= y2; i++) { 
        answer.push_back(map[x2][i]);
    }

    return answer;
}