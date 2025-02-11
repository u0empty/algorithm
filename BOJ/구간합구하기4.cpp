#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, a, b;
	cin >> n >> m;
	
	vector<int> arr(n + 1);
	vector<int> v(n + 1, 0);

	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	v = arr;
	
	for (int i = 2; i <= n; i++)
		v[i] += v[i - 1];
	
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		int sum = v[b] - v[a - 1];
		cout << sum << "\n";
	}
	
	return 0;
}