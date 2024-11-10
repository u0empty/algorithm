#include <iostream>

using namespace std;

int a, b, c, d, e, f;
int x, y;

int main() {
	cin >> a >> b >> c >> d >> e >> f;

	if (a == 0) {
		y = c / b;
		x = (f - e * y) / d;
	}
	else if (b == 0) {
		x = c / a;
		y = (f - d * x) / e;
	}
	else {
		x = (b * f - c * e) / (b * d - a * e);
		y = (c - a * x) / b;
	}

	cout << x << " " << y;
	return 0;
}