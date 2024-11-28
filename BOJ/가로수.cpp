#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main() {
	int n, t;
	cin >> n;

	vector<int> trees(n);
	for (int i = 0; i < n; i++) {
		cin >> trees[i];
	}

	set<int> s;
	for (int i = 0; i < n - 1; i++) {
		s.insert(trees[i + 1] - trees[i]);
	}

	int g = *s.begin();
	for (auto i = next(s.begin()); i != s.end(); i++) {
		g = gcd(g, *i);
		if (g == 1) break;
	}

	int ans = ((trees[n - 1] - trees[0]) / g) + 1 - n;
	cout << ans;

	return 0;
}