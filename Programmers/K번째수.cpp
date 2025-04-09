#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer, v;
    
    for (int i = 0; i < commands.size(); i++) {
        int a = commands[i][0];
        int b = commands[i][1];
        int c = commands[i][2];
        
        for (int k = a - 1; k < b; k++) {
            v.push_back(array[k]);
        }
        
        sort(v.begin(), v.end());
        answer.push_back(v[c - 1]);
        v.clear();
    }
    
    return answer;
}