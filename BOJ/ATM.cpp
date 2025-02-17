#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr.begin(), arr.end());

	vector<int> sum = arr;
	for (int i = 1; i < n; i++)
		sum[i] += sum[i - 1];

	int ans = 0;
	for (int i = 0; i < n; i++)
		ans += sum[i];
	cout << ans;

	return 0;
}