#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int ans = 2e9;
	ans = min(ans, x);
	ans = min(ans, y);
	ans = min(ans, w - x);
	ans = min(ans, h - y);

	cout << ans;
}