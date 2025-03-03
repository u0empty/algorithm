#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, tmp;
	cin >> n;
	vector<int> v(20000001);
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v[tmp + 10000000]++;
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		cout << v[tmp + 10000000] << " ";
	}
	return 0;
}