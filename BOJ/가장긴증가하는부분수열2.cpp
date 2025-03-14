#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> v, lis(1);

void solution(int num) {
	auto idx = lower_bound(lis.begin(), lis.end(), num);
	if (idx == lis.end()) lis.push_back(num);
	else *idx = num;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	v.resize(N);
	cin >> lis[0];
	for (int i = 1; i < N; i++) {
		cin >> v[i];
		solution(v[i]);
	}
	cout << lis.size();

	return 0;
}