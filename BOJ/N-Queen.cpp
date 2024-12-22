#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int n;
int col[15];

bool check(int y) {
	for (int i = 0; i < y; i++) {
		if (col[y] == col[i]) return false;
		if (abs(col[y] - col[i]) == (y - i)) return false;
	}
	return true;
}

int solve(int c) {
	if (c == n) return 1;
	int ret = 0;
	for (int r = 0; r < n; r++) {
		col[c] = r;
		if (check(c)) ret += solve(c + 1);
		col[c] = -1;
	}
	return ret;
}

int main() {
	cin >> n;
	fill(col, col + 15, -1);
	cout << solve(0);
	return 0;
}