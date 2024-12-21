#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> v;

void solution(int now, int lev) {
	if (lev == M) {
		for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 1; i <= N; i++) {
		v.push_back(i);
		solution(i, lev + 1);
		v.pop_back();
	}
}

int main() {
	cin >> N >> M;
	solution(1, 0);
	return 0;
}