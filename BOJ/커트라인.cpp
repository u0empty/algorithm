#include <iostream>
#include <algorithm>

using namespace std;

int n, k;
int num[1001] = { 0, };

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n);
	cout << num[n - k];

	return 0;
}
