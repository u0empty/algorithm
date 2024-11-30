#include <iostream>
#include <algorithm>
using namespace std;

int m, n;

void getPrime() {
	int *isPrime = new int[n + 1];
	fill(isPrime, isPrime + (n + 1), 1);
	
	isPrime[0] = 0;
	isPrime[1] = 0;

	for (int i = 2; i <= n; i++) {
		if (isPrime[i]) {
			for (int j = i * 2; j <= n; j += i) {
				isPrime[j] = 0;
			}
		}
	}

	for (int i = m; i <= n; i++) {
		if (isPrime[i]) cout << i << "\n";
	}

	return;
}

int main() {
	cin >> m >> n;
	getPrime();

	return 0;
}