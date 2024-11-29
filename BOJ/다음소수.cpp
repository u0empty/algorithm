#include <iostream>
#include <cmath>
using namespace std;

long long t, n;

bool isPrime() {
	if (n <= 1) return false;
	
	for (long long i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}

	return true;
}

int main() {
	cin >> t;
	for (long long i = 0; i < t; i++) {
		cin >> n;
		while (!isPrime()) {
			n++;
		}
		cout << n << "\n";
	}

	return 0;
}