#include <iostream>
#include <algorithm>

using namespace std;

int num[6] = { 0, };
int sum = 0;

int main() {
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		sum += num[i];
	}
	sort(num, num + 5);

	cout << sum / 5 << "\n";
	cout << num[2];

	return 0;
}