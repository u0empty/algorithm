#include <iostream>
#include <vector>
using namespace std;

int n;

void solution(vector<vector<bool>>& v, vector<vector<bool>>& used, int lev) {
	if (lev > n) return;
	for (int i = 0; i < lev; i++) {
		for (int j = 0; j < lev; j++) {
			if (used[i][j]) continue;
			if (i >= lev / 3 && i < lev * 2 / 3 && j >= lev / 3 && j < lev * 2 / 3) {
				v[i][j] = false;
				used[i][j] = true;
			}
			else {
				v[i][j] = v[i % (lev / 3)][j % (lev / 3)];
				used[i][j] = true;
			}
		}
	}
	solution(v, used, lev * 3);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	vector<vector<bool>> v(n, vector<bool>(n, true));
	vector<vector<bool>> used(n, vector<bool>(n, false));
	solution(v, used, 3);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (v[i][j]) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}

	return 0;
}
