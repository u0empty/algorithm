#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
	return a * b / gcd(a, b);
}

int main() {
	long long a, b, ans;
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

	cout << ans;

	return 0;
}