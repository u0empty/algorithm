#include <iostream>
#include <vector>
using namespace std;

int t, n;
vector<bool> v(1000000, true);

void getPrime() {
	v[0] = false;
	v[1] = false;
	for (int i = 2; i < 1000000; i++) {
		if (v[i]) {
			for (int j = i * 2; j < 1000000; j += i) {
				v[j] = false;
			}
		}
	}
}

void goldbach() {
	int cnt = 0;
	for (int i = 2; i <= n / 2; i++) {
		if (v[i] && v[n - i]) cnt++;
	}
	cout << cnt << "\n";
}

int main() {
	getPrime();
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		goldbach();
	}

	return 0;
}