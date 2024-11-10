#include <iostream>
#include <string>

using namespace std;

int m, n;
int ans = 2e9;
string str[51];
string col = "WB";

void input() {
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		cin >> str[i];
	}
}

void solution(int y, int x, int flag) {
	int cnt = 0;
	char now;
	for (int i = y; i < y + 8; i++) {
		for (int j = x; j < x + 8; j++) {
			now = col[flag];
			if (str[i][j] == now) {
				if (j < x + 7) flag = 1 - flag;
				continue;
			}
			else {
				cnt++;
				if (j < x + 7) flag = 1 - flag;
				if (cnt > ans) return;
			}
		}
	}
	if (cnt < ans) ans = cnt;
}


int main() {
	input();
	for (int i = 0; i < m - 7; i++) {
		for (int j = 0; j < n - 7; j++) {
			solution(i, j, 0);
			solution(i, j, 1);
		}
	}

	cout << ans;

	return 0;
}