#include <iostream>
using namespace std;

long long arr[1000001];

int main() {
	int n;
	cin >> n;
	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i <= n; i++) {
		arr[i] = (arr[i - 2] + arr[i - 1]) % 15746;
	}
	cout << arr[n] % 15746;
	return 0;
}