#include <vector>

using namespace std;

int answer = 0;

void dfs(vector<int> nums, int t, int lev, int sum) {
    if (lev == nums.size()) {
        if (sum == t) answer++;
        return;
    }
    dfs(nums, t, lev + 1, sum + nums[lev]);
    dfs(nums, t, lev + 1, sum - nums[lev]);
}

int solution(vector<int> numbers, int target) {
    dfs(numbers, target, 0, 0);
    return answer;
}