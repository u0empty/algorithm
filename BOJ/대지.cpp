#include <iostream>
#include <algorithm>

using namespace std;

int minX = 10001;
int maxX = -10001;
int minY = 10001;
int maxY = -10001;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		minX = min(minX, x);
		maxX = max(maxX, x);
		minY = min(minY, y);
		maxY = max(maxY, y);
	}

	int ans = 0;
	ans = (maxX - minX) * (maxY - minY);
	cout << ans;

	return 0;
}