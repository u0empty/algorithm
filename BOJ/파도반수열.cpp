#include <iostream>
using namespace std;

long long p[101] = { 0, };

int main() {
	int t, n;
	cin >> t;

	p[1] = 1;
	p[2] = 1;
	p[3] = 1;
	p[4] = 2;

	for (int i = 5; i <= 100; i++) {
		p[i] = p[i - 5] + p[i - 1];
	}
	
	for (int i = 1; i <= t; i++) {
		cin >> n;
		cout << p[n] << "\n";
	}
	return 0;
}