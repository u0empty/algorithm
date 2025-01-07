#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int arr[5];
	for (int i = 0; i < 5; i++) cin >> arr[i];
	sort(arr, arr + 5);

	int end = arr[2] * arr[3] * arr[4];
	int ans = end;
	int num = 3;
	while (1) {
		num++;
		if (num > end) break;
		int cnt = 0;
		for (int i = 0; i < 5; i++) {
			if (num % arr[i] != 0) continue;
			cnt++;
		}
		if (cnt < 3) continue;
		ans = min(ans, num);
	}
	cout << ans;
	return 0;
}