#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	long long n;
	cin >> n;

	long long ans = n * (n - 1) * 0.5;
	cout << fixed << setprecision(0);
	cout << ans << "\n" << 2;
}