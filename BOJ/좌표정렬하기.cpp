#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
vector<vector<int>> posV(100001);
vector<vector<int>> negV(100001);

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (x < 0) negV[-x].push_back(y);
		else posV[x].push_back(y);
	}

	for (int i = 0; i < 100001; i++) {
		sort(posV[i].begin(), posV[i].end());
	}
	for (int i = 0; i < 100001; i++) {
		sort(negV[i].begin(), negV[i].end());
	}

	for (int i = 100000; i > 0; i--) {
		if (negV[i].empty()) continue;
		for (int j = 0; j < negV[i].size(); j++) {
			cout << -i << " " << negV[i][j] << "\n";
		}
	}
	for (int i = 0; i < 100001; i++) {
		if (posV[i].empty()) continue;
		for (int j = 0; j < posV[i].size(); j++) {
			cout << i << " " << posV[i][j] << "\n";
		}
	}

	return 0;
}