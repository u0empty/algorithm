#include <iostream>
#include <vector>

using namespace std;

int n, m, tmp;
vector<int> v(20000010);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
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