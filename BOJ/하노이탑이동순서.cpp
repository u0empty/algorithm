#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> v;

void hanoi(int n, int from, int mid, int to) {
	if (n == 0) return;
	hanoi(n - 1, from, to, mid);
	v.push_back({ from, to });
	hanoi(n - 1, mid, from, to);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	hanoi(n, 1, 2, 3);
	cout << v.size() << "\n";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}