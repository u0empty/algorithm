#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int N, M, tmp;
vector<int> A, C;
deque<int> B;

void solution() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		A.push_back(tmp);
	}
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		if (A[i] == 0) {
			B.push_back(tmp);
		}
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> tmp;
		B.push_front(tmp);
		cout << B.back() << " ";
		B.pop_back();
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solution();
	return 0;
}