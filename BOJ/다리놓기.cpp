#include <iostream>
using namespace std;

int t, n, m;

void solution() {
	if (n == 1 || m - n == 1) {
		cout << m << "\n";
		return;
	}
	if (n == m) {
		cout << "1\n";
		return;
	}

	if (n > m - n) n = m - n;

	unsigned long long ans = 1;
	for (int i = 1; i <= n; i++) {
		ans *= m--;
		ans /= i;
	}
	cout << ans << "\n";
	return;
}

int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> m;
		solution();
	}

	return 0;
}