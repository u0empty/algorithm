#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool cmp(string n, string m) {    
    string a = n + m;
    string b = m + n;
    return a > b;
}

string solution(vector<int> numbers) {
    vector<string> nums;
    string answer = "";
    for (int i = 0; i < numbers.size(); i++) {
        nums.push_back(to_string(numbers[i]));
    }
    sort(nums.begin(), nums.end(), cmp);
    for (int i = 0; i < nums.size(); i++) {
        answer += nums[i];
    }
    if (answer[0] == '0') answer = "0";
    return answer;
}
    