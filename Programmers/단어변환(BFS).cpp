#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

bool is1Diff(string a, string b) {
    int diff = 0;
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] != b[i]) diff++;
    }
    return diff == 1;
}

int solution(string begin, string target, vector<string> words) {
    int ti = find(words.begin(), words.end(), target) - words.begin();
    int n = words.size();
    if (ti == n) return 0;
    
    vector<bool> visited(n, false);
    queue<pair<string, int>> q;
    q.push({begin, 0});
    
    while (!q.empty()) {
        auto [now, cnt] = q.front();
        q.pop();
        
        if (now == target) {
            return cnt;
        }
        
        for (int i = 0; i < words.size(); ++i) {
            if (visited[i]) continue;
            if (is1Diff(now, words[i])) {
                q.push({words[i], cnt + 1});
                visited[i] = true;
            }
        }
    }
    
    return 0;
}