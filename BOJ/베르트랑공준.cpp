#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<bool> isPrime(250000, true);

void getPrime() {
	isPrime[0] = false;
	isPrime[1] = false;

	for (int i = 2; i < 250000; i++) {
		if (isPrime[i]) {
			for (int j = i * 2; j < 250000; j += i) {
				isPrime[j] = false;
			}
		}
	}

	return;
}

void cntPrime() {
	int cnt = 0;
	for (int i = n + 1; i <= 2 * n; i++) {
		if (isPrime[i]) cnt++;
	}
	cout << cnt << "\n";

	return;
}

int main() {
	getPrime();

	while (1) {
		cin >> n;
		if (n == 0) break;
		cntPrime();
	}

	return 0;
}