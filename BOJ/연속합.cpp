#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int maxi = -1e9;

	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		maxi = max(maxi, v[i]);
	}

	int idx = 1;
	vector<int> v1 = v, v2;
	while (v1.size() > 1) {
		for (int i = idx; i < n; i++) {
			v2.push_back(v1[i - idx] + v[i]);
		}
		for (int i = 0; i < v2.size(); i++) {
			maxi = max(maxi, v2[i]);
		}
		v1 = v2;
		v2.clear();
		idx++;
	}
	cout << maxi;
	return 0;
}