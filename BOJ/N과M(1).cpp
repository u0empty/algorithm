#include <iostream>
#include <vector>
using namespace std;

int N, M;
int visit[9];
vector<int> v;

void solution(int lev) {
	if (lev == M) {
		for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 1; i <= N; i++) {
		if (visit[i]) continue;
		visit[i] = 1;
		v.push_back(i);
		solution(lev + 1);
		visit[i] = 0;
		v.pop_back();
	}
}

int main() {
	cin >> N >> M;
	solution(0);
	return 0;
}