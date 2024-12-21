#include <iostream>
#include <vector>
using namespace std;

int N, M;
int arr[9];
int visit[9];
vector<int> v;

void solution(int num, int lev) {
	if (lev == M) {
		for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = num; i <= N; i++) {
		if (visit[i]) continue;
		visit[i] = 1;
		v.push_back(arr[i]);
		solution(i, lev + 1);
		visit[i] = 0;
		v.pop_back();
	}
}

int main() {
	cin >> N >> M;
	for (int i = 1; i <= N; i++) arr[i] = i;
	solution(1, 0);
}