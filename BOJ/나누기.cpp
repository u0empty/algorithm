#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N, F;
	cin >> N >> F;

	int a = N % 100;
	int b = N % F;

	if (a < b) {
		a = (N - b + F) % 100;
	}
	else {
		a -= b;
		while (a - F >= 0) a -= F;
	}

	if (a / 10 < 1) cout << "0";
	cout << a;
	
	return 0;
}