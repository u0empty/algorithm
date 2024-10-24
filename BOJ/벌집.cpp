#include <iostream>

using namespace std;

int main() {
	int N, ans = 0;
	cin >> N;

	N--;
	while (true) {
		if (N <= 0) {
			cout << ++ans;
			break;
		}
		else {
			ans++;
			N -= 6 * ans;
		}
	}

	return 0;
}