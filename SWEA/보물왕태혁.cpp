#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, n;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cout << "#" << i << " ";
		cin >> n;
		vector<int> v(n);
		for (int j = 0; j < n; j++) cin >> v[j];
		sort(v.begin(), v.end());
		cout << v[0] * v[n - 1] << "\n";
	}

	return 0;
}