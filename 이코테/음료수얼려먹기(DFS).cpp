#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> v(4);
int cnt = 0;

bool dfs(int y, int x) {
	if (y < 0 || x < 0 || y >= 4 || x >= 5) return false;
	if (v[y][x] == '0') {
		v[y][x] = '1';
		dfs(y - 1, x);
		dfs(y + 1, x);
		dfs(y, x - 1);
		dfs(y, x + 1);

		return true;
	}
	return false;
}

int main() {
	for (int i = 0; i < 4; i++) cin >> v[i];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (dfs(i, j)) cnt++;
		}
	}
	cout << cnt;
	return 0;
}