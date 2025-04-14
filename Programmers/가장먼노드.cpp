#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    vector<vector<int>> graph(n + 1);
    vector<int> dist(n + 1, -1); // 거리 저장 (-1은 미방문)
    queue<int> q;

    // 양방향 그래프 생성
    for (auto e : edge) {
        graph[e[0]].push_back(e[1]);
        graph[e[1]].push_back(e[0]);
    }

    // BFS 시작
    q.push(1);
    dist[1] = 0;

    while (!q.empty()) {
        int curr = q.front(); q.pop();
        for (int next : graph[curr]) {
            if (dist[next] == -1) {
                dist[next] = dist[curr] + 1;
                q.push(next);
            }
        }
    }

    // 가장 멀리 떨어진 노드 개수 카운트
    int maxDist = *max_element(dist.begin(), dist.end());
    int count = count_if(dist.begin(), dist.end(), [maxDist](int d) {
        return d == maxDist;
    });

    return count;
}