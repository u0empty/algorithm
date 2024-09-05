#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    vector<vector<int>> map(n, vector<int>(n, n));
    int num = 2;
    
    map[0][0] = 1;
    for (int i = 1; i < n - 2; i++) {
        for (int j = 1; j < n - 2; j++) {
            if (map[i][j] == n) {
                map[i][j] = num;
                answer.push_back(map[i][j]);
            }
        }
        num--;
    }
    
    return answer;
}

int main() {
    int n = 3;
    int left = 2;
    int right = 5;

    vector<vector<int>> map(n, vector<int>(n, n));
    int num = 2;
    
    map[0][0] = 1;
    for (int i = 1; i < n - 2; i++) {
        for (int j = 1; j < n - 2; j++) {
            if (map[i][j] == n) {
                map[i][j] = num;
            }
            cout << map[i][j] << " ";
        }
        num--;
        cout << endl;
    }
}