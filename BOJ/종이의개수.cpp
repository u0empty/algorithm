#include <iostream>
#include <vector>
using namespace std;

int n;
vector<vector<int>> v;
vector<int> cnt(3);

void solution(int y, int x, int size) {
	int num = v[y][x];
	for (int i = y; i < y + size; i++) {
		for (int j = x; j < x + size; j++) {
			if (v[i][j] != num) {
				int ns = size / 3;
				solution(y, x, ns);
				solution(y, x + ns, ns);
				solution(y, x + (ns * 2), ns);
				solution(y + ns, x, ns);
				solution(y + ns, x + ns, ns);
				solution(y + ns, x + (ns * 2), ns);
				solution(y + (ns * 2), x, ns);
				solution(y + (ns * 2), x + ns, ns);
				solution(y + (ns * 2), x + (ns * 2), ns);
				return;
			}
		}
	}
	cnt[num + 1]++;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	v.resize(n, vector<int>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> v[i][j];
	
	solution(0, 0, n);
	
	for (int i = 0; i < 3; i++)
		cout << cnt[i] << "\n";

	return 0;
}