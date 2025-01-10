#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m, tmp;
vector<int> v;

int binarySearch() {
	int st = 0;
	int en = n - 1;
	int mid;

	while (st <= en) {
		mid = (st + en) / 2;
		if (v[mid] == tmp) return 1;
		if (v[mid] < tmp) st = mid + 1;
		else if (v[mid] > tmp) en = mid - 1;
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		cout << binarySearch() << "\n";
	}
	return 0;
}