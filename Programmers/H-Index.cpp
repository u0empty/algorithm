#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(), citations.end(), greater<int>());
    
    int n = citations.size();
    int answer = 0;
    for (int i = 0; i < n; i++) {
        if (citations[i] >= i + 1) {
            answer = i + 1;
        }
        else break;
    }
    
    return answer;
}