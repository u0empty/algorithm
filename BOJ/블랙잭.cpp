#include <iostream>

using namespace std;

int n, m, sum, ans = 0;
int num[101] = { 0, };

void input() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
}

void solution() {
	for (int i = 0; i < n; i++) {
		sum = 0;
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = num[i] + num[j] + num[k];
				if (sum == m) {
					cout << sum;
					return;
				}
				if (sum > m) continue;
				if (sum > ans) ans = sum;
			}
		}
	}

	cout << ans;
}

int main() {
	input();
	solution();

	return 0;
}