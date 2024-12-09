#include <iostream>
#include <deque>
using namespace std;

int N, M, tmp;
deque<int> A;
deque<int> B;
deque<int> C;

void input() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		A.push_back(tmp);
	}
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		B.push_back(tmp);
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> tmp;
		C.push_back(tmp);
	}
}

void solution() {
	for (int i = 0; i < M; i++) {
		int ret = C[i];
		for (int j = 0; j < N; j++) {
			if (A[j] == 0) {
				B.insert(B.begin() + j, ret);
				ret = B[j + 1];
				B.erase(B.begin() + j + 1);
			}
		}
		cout << ret;
		if (i < M - 1) cout << " ";
	}

	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	input();
	solution();
	
	return 0;
}