#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N, M, K;
	cin >> N >> M >> K;
	vector<string> arr(N);
	vector<vector<int>> fromW(N + 1, vector<int>(M + 1, 0));
	vector<vector<int>> fromB(N + 1, vector<int>(M + 1, 0));

	for (int i = 0; i < N; i++) cin >> arr[i];

	// (0, 0) 색상 기준으로 바꿔야하는 타일 수 구하기
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			fromW[i + 1][j + 1] = !(((i + j) % 2 == 0) == (arr[i][j] == 'W'));
			fromB[i + 1][j + 1] = !(((i + j) % 2 == 0) == (arr[i][j] == 'B'));
		}
	}

	// from?[i][j] = (0, 0)이 ?로 시작할 때 (i, j)까지 바꿔야하는 타일 수의 누적 합
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			fromW[i][j] += fromW[i - 1][j] + fromW[i][j - 1] - fromW[i - 1][j - 1];
			fromB[i][j] += fromB[i - 1][j] + fromB[i][j - 1] - fromB[i - 1][j - 1];
		}
	}

	// mini = (i + 1, j + 1)을 시작점으로 하는 k * k 크기의 체스판에서 바꿔야 하는 최소 타일 수
	int mini = 2e9;
	for (int i = 0; i + K <= N; i++) {
		for (int j = 0; j + K <= M; j++) {
			int w = fromW[i + K][j + K] - fromW[i][j + K] - fromW[i + K][j] + fromW[i][j];
			int b = fromB[i + K][j + K] - fromB[i][j + K] - fromB[i + K][j] + fromB[i][j];
			mini = min({ mini, w, b });
		}
	}
	cout << mini;

	return 0;
}