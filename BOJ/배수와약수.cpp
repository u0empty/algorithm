#include <iostream>

using namespace std;

int x, y;

bool isFac() {
	return y % x == 0;
}

bool isMul() {
	return x % y == 0;
}

void solution() {
	if (isFac()) {
		cout << "factor\n";
		return;
	}
	if (isMul()) {
		cout << "multiple\n";
		return;
	}
	cout << "neither\n";
	return;
}

int main() {
	while (true) {
		cin >> x >> y;
		if (x == 0) break;

		solution();
	}

	return 0;
}