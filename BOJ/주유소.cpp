#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> dist(n - 1);
	vector<int> price(n);
	for (int i = 0; i < n - 1; i++) cin >> dist[i];
	for (int i = 0; i < n; i++) cin >> price[i];

	long long cost = 0;
	long long mini = price[0];
	for (int i = 0; i < n - 1; i++) {
		if (price[i] < mini) mini = price[i];
		cost += mini * dist[i];
	}
	cout << cost;

	return 0;
}