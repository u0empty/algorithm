#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void solution(vector<bool>& v, int l, int r) {
	if (l == r) return;
	int st = l + (r - l + 1) / 3;
	int en = st + (r - l + 1) / 3;
	for (int i = st; i < en; i++) v[i] = false;
	solution(v, l, st - 1);
	solution(v, en, r);
}

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) cout << "-";
		else {
			int size = pow(3, n);
			vector<bool> v(size, true);
			solution(v, 0, size - 1);
			for (int i = 0; i < size; i++) {
				if (v[i]) cout << "-";
				else cout << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}