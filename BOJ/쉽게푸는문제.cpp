#include <iostream>
using namespace std;

int main() {
	int arr[1001], a, b;
	cin >> a >> b;
	int idx = 1;
	int num = 1;
	int cnt = 0;
	while (idx <= 1000) {
		if (cnt == num) {
			cnt = 0;
			num++;
		}
		arr[idx] = num;
		idx++;
		cnt++;
	}
	int sum = 0;
	for (int i = a; i <= b; i++) sum += arr[i];
	cout << sum;
	return 0;
}