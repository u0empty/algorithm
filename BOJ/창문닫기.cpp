#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, cnt = 0;
	cin >> n;
	
	for (int i = 1; i <= sqrt(n); i++) {
		if (i * i > n) break;
		cnt++;
	}
	cout << cnt;

	return 0;
}