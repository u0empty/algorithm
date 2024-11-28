#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) return b;
	else return gcd(b, a % b);
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	int t, a, b, ans;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		if (a == b) ans = a;
		else if (a == 1) ans = b;
		else if (b == 1) ans = a;
		else {
			if (a < b) {
				int tmp = a;
				a = b;
				b = tmp;
			}
			ans = lcm(a, b);
		}
		cout << ans << "\n";
	}

	return 0;
}