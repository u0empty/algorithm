#include <iostream>
#include <cstring>

using namespace std;

int n;
int cnt = 0;
int prm[1001] = { 0, };

void getPrime() {
	fill(prm, prm + 1001, 1);
	prm[0] = 0;
	prm[1] = 0;

	for (int i = 2; i < 1001; i++) {
		if (prm[i]) {
			for (int j = i + i; j < 1001; j += i) {
				if (prm[j]) prm[j] = 0;
			}
		}
	}
}

bool isPrime(int& num) {
	return prm[num];
}

int main() {
	getPrime();
	cin >> n;
	int num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		cnt += isPrime(num);
	}

	cout << cnt;
}