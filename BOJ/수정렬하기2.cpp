#include <iostream>
#include <algorithm>

using namespace std;

int n;
int num[1000001] = { 0, };

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n);
	for (int i = 0; i < n; i++) {
		cout << num[i] << "\n";
	}

	return 0;
}