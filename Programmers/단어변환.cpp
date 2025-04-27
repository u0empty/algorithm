#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int ans = 1e9;
vector<bool> used;

bool is1Diff(string a, string b) {
    int diff = 0;
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] != b[i]) diff++;
    }
    return diff == 1;
}

void dfs(string now, string tar, vector<string>& words, int cnt) {
    if (now == tar) {
        ans = min(ans, cnt);
        return;
    }
    
    for (int i = 0; i < words.size(); ++i) {
        if (used[i]) continue;
        if (is1Diff(now, words[i])) {
            used[i] = true;
            dfs(words[i], tar, words, cnt + 1);
            used[i] = false;
        }
    }
}

int solution(string begin, string target, vector<string> words) {
    int ti = find(words.begin(), words.end(), target) - words.begin();
    int n = words.size();
    if (ti == n) return 0;
    
    used.assign(n, false);
    
    dfs(begin, target, words, 0);
    
    return ans == 1e9 ? 0 : ans;
}