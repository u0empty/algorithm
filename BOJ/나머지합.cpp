#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	
	vector<int> v(m, 0);
	long long sum = 0;
	long long cnt = 0;
	v[0] = 1;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		sum = (sum + num) % m;
		cnt += v[sum];
		v[sum]++;
	}
	cout << cnt;

	return 0;
}