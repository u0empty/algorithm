#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int m, n;
int prime[10001] = { 0, };
int sum = 0;
int mini = 2e9;
bool flag;

void input() {
	cin >> m >> n;
	fill(prime + 2, prime + 10001, 1);
}

void getPrime() {
	for (int i = 2; i <= n; i++) {
		if (prime[i]) {
			for (int j = i + i; j <= n; j += i) {
				if (prime[j]) {
					prime[j] = 0;
				}
			}
		}
	}

	return;
}

void solution() {
	for (int i = m; i <= n; i++) {
		if (prime[i]) {
			sum += i;
			if (!flag) {
				mini = i;
				flag = true;
			}
		}
	}

	if (sum == 0) {
		cout << -1;
		return;
	}

	cout << sum << "\n" << mini;
	return;
}

int main() {
	input();
	getPrime();
	solution();

	return 0;
}