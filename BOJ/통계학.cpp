#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	if (n == 1) {
		int num;
		cin >> num;
		cout << num << "\n" << num << "\n" << num << "\n" << "0";
		return 0;
	}

	vector<int> v(n);

	int sum = 0;
	int maxi = -4001;
	int mini = 4001;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
		maxi = max(maxi, v[i]);
		mini = min(mini, v[i]);
	}
	sort(v.begin(), v.end());

	map<int, int> m;
	for (int i = 0; i < n; i++) {
		m[v[i]]++;
	}

	int cnt = 1;
	vector<int> v2;
	for (auto pair : m) {
		if (pair.second == cnt) {
			v2.push_back(pair.first);
		}
		else if (pair.second > cnt) {
			v2.clear();
			v2.push_back(pair.first);
			cnt = pair.second;
		}
	}

	int avg = round(1.0 * sum / n);
	int mid = v[n / 2];
	int mode = v2.size() == 1 ? v2[0] : v2[1];
	int range = maxi - mini;

	cout << avg << "\n" << mid << "\n" << mode << "\n" << range;

	return 0;
}