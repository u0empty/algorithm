#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<bool> visited;
int answer = 1e9;

bool is1Diff(string a, string b) {
    int diff = 0;
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] != b[i]) diff++;
    }
    return diff == 1;
}

void dfs(string now, string target, vector<string> words, int cnt) {
    if (now == target) {
        answer = min(answer, cnt);
        return;
    }
    
    for (int i = 0; i < words.size(); ++i) {
        if (visited[i]) continue;
        if (is1Diff(now, words[i])) {
            visited[i] = true;
            dfs(words[i], target, words, cnt + 1);
            visited[i] = false;
        }
    }
}

int solution(string begin, string target, vector<string> words) {
    int ti = find(words.begin(), words.end(), target) - words.begin();
    int n = words.size();
    if (ti == n) return 0;
    
    visited.assign(n, false);
    
    dfs(begin, target, words, 0);
    
    return answer == 1e9 ? 0 : answer;
}