#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	
	if (k == 0) {
		cout << "1";
		return 0;
	}

	int ans = 1;
	for (int i = 0; i < k; i++) {
		ans *= n--;
	}
	int tmp = k;
	for (int i = 0; i < tmp; i++) {
		ans /= k--;
	}
	cout << ans;

	return 0;
}