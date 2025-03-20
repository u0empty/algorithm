#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int t, n, ans;
vector<int> arr, v;
vector<double> avg;

void dfs(int lev) {
	if (lev >= n) {
		if (!v.empty()) {
			double sum = 0;
			for (int i = 0; i < v.size(); i++) sum += v[i];
			avg.push_back(sum / v.size());
		}
	}
	else {
		v.push_back(arr[lev]);
		dfs(lev + 1);
		v.pop_back();
		dfs(lev + 1);
	}
}

int main() {
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> n;
		arr.resize(n);
		avg.clear();
		
		for (int j = 0; j < n; j++) cin >> arr[j];
		dfs(0);

		double sum = 0;
		for (double x : avg) sum += x;
		double ans = sum / avg.size();
		cout << "#" << i << " " << setprecision(20) << defaultfloat << ans << "\n";
	}

	return 0;
}