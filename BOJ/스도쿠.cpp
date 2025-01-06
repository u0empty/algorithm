#include <iostream>
#include <vector>
using namespace std;

int arr[10][10];
bool flag;
vector<pair<int, int>> v;

bool check(int y, int x, int num) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[y][j] == num) return false;
			if (arr[i][x] == num) return false;
		}
	}
	int ny = (y / 3) * 3;
	int nx = (x / 3) * 3;
	for (int i = ny; i < ny + 3; i++) {
		for (int j = nx; j < nx + 3; j++) {
			if (arr[i][j] == num) return false;
		}
	}
	return true;
}

void dfs(int idx) {
	if (flag) return;
	if (idx == v.size()) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
		flag = true;
		return;
	}
	int y = v[idx].first;
	int x = v[idx].second;
	for (int i = 1; i <= 9; i++) {
		if (check(y, x, i)) {
			arr[y][x] = i;
			dfs(idx + 1);
			arr[y][x] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 0) v.push_back({ i, j });
		}
	}
	dfs(0);
	return 0;
}