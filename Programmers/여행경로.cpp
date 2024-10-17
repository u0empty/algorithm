#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> answer;
bool usedAll;
int used[100001] = { 0, };

void dfs(vector<vector<string>> tickets, string now, int step) {
    answer.push_back(now);

    if (step == tickets.size()) {
        usedAll = true;
    }

    for (int i = 0; i < tickets.size(); i++) {
        if (used[i]) continue;
        if (tickets[i][0] == now) {
            used[i] = 1;
            dfs(tickets, tickets[i][1], step + 1);
            
            if (!usedAll) {
                answer.pop_back();
                used[i] = 0;
            }
        }
    }
    return;
}

vector<string> solution(vector<vector<string>> tickets) {
    sort(tickets.begin(), tickets.end());
    dfs(tickets, "ICN", 0);
    return answer;
}