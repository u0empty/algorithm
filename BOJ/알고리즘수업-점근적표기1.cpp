#include <iostream>

using namespace std;

int a1, a0, c, n0;

int solution() {
	if (a1 * n0 + a0 > c * n0) {
		return 0;
	}
	else {
		for (int i = n0; i < 101; i++) {
			if (a1 * i + a0 > c * i) return 0;
		}
	}
	return 1;
}

int main() {
	cin >> a1 >> a0 >> c >> n0;
	cout << solution();
	
	return 0;
}