#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	vector<int> v(n);

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < k; i++)
		v[k - 1] += arr[i];

	for (int i = k; i < n; i++)
		v[i] = v[i - 1] - arr[i - k] + arr[i];

	int maxi = -2e9;
	for (int i = k - 1; i < n; i++)
		maxi = max(maxi, v[i]);
	cout << maxi;

	return 0;
}