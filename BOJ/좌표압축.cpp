#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	vector<int> v2(v.begin(), v.end());
	sort(v2.begin(), v2.end());
	v2.erase(unique(v2.begin(), v2.end()), v2.end());

	for (int i = 0; i < n; i++) {
		int ans = lower_bound(v2.begin(), v2.end(), v[i]) - v2.begin();
		cout << ans << " ";
	}

	return 0;
}