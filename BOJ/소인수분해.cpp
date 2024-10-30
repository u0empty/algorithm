#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int n;
int prime[10000001] = { 0, };
vector<int> v;

void setPrime() {
	fill(prime + 2, prime + 10000001, 1);

	for (int i = 2; i <= n; i++) {
		if (prime[i]) {
			v.push_back(i);
			for (int j = i + i; j <= n; j += i) {
				if (prime[j]) prime[j] = 0;
			}
		}
	}
}

void solution() {
	int idx = 0;
	while (true) {
		if (n == 1) break;

		if (n % v[idx] == 0) {
			n /= v[idx];
			cout << v[idx] << "\n";
		}
		else idx++;
	}
}

int main() {
	cin >> n;
	if (n == 1) return 0;

	setPrime();
	solution();

	return 0;
}