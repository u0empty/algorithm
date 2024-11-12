#include <iostream>

using namespace std;

int n, ans = -1;

void solution() {
	if (n % 5 == 0) {
		cout << n / 5;
		return;
	}

	int tmp = n;
	int cnt = 0;
	while (true) {
		tmp -= 3;
		if (tmp < 0) break;
		cnt++;
		if (tmp % 5 == 0) {
			cout << tmp / 5 + cnt;
			return;
		}
	}
	cout << -1;
	return;
}

int main() {
	cin >> n;
	solution();
	
	return 0;
}