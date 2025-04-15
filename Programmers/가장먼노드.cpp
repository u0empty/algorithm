#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    vector<vector<int>> graph(n + 1);
    vector<int> dist(n + 1, -1);
    queue<int> q;
    
    for (auto e : edge) {
        graph[e[0]].push_back(e[1]);
        graph[e[1]].push_back(e[0]);
    }
    
    q.push(1);
    dist[1] = 0;
    
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        
        for (int next : graph[curr]) {
            if (dist[next] == -1) {
                dist[next] = dist[curr] + 1;
                q.push(next);
            }
        }
    }
    
    int maxDist = *max_element(dist.begin(), dist.end());
    int cnt = count_if(dist.begin(), dist.end(), [maxDist](int d) {
        return d == maxDist;
    });
        
    return cnt;
}