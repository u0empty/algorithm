#include <iostream>
#include <queue>
#include <string>
using namespace std;

int N, K, L, t = 0;
int r, c, nr, nc;
int arr[101][101] = { 0, };
queue<pair<int, string>> q;
queue<pair<int, int>> path;

void getNewRc1(int dr) {
	if (dr == 0) {
		nr = r - 1;
		nc = c;
	}
	else if (dr == 1) {
		nr = r;
		nc = c + 1;
	}
	else if (dr == 2) {
		nr = r + 1;
		nc = c;
	}
	else {
		nr = r;
		nc = c - 1;
	}
}

void solution() {
	r = 1;
	c = 1;
	arr[r][c] = 1;
	path.push({ r, c });
	int dr = 1; // 0상, 1우, 2하, 3좌
	
	while (1) {
		if (!q.empty()) {
			if (q.front().first == t) {
				if (q.front().second == "L") dr == 0 ? dr = 3 : dr -= 1;
				else dr == 3 ? dr = 0 : dr += 1;
				q.pop();
			}
		}
		getNewRc1(dr);
		t++;

		if (nr < 1 || nr > N || nc < 1 || nc > N) return;
		if (arr[nr][nc] == 1) return;
		
		if (arr[nr][nc] != 4) {
			arr[path.front().first][path.front().second] = 0;
			path.pop();
		}
		arr[nr][nc] = 1;
		path.push({ nr, nc });
		r = nr;
		c = nc;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> K;
	int r, c;
	for (int i = 0; i < K; i++) {
		cin >> r >> c;
		arr[r][c] = 4; // 사과 위치
	}
	cin >> L;
	int x;
	string ch;
	for (int i = 0; i < L; i++) {
		cin >> x >> ch;
		q.push({ x, ch }); // 이동 정보
	}
	solution();
	cout << t;

	return 0;
}