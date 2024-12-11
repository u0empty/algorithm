#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n == 0) {
		cout << "1";
		return 0;
	}

	int ans = 1;
	for (int i = 1; i <= n; i++) {
		ans *= i;
	}
	cout << ans;

	return 0;
}