#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

void solution(int a, int b) {
	int idx = 0;
	int tmp;

	while (1) {
		if (v.empty())
			tmp = a % 10;
		else {
			tmp = (v[idx] * a) % 10;
			if (tmp == v[0]) break;
			idx++;
			
		}
		v.push_back(tmp);
	}

	return;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, a, b;
	cin >> t;
	for (int i = 0; i < t; i++) {
		v.clear();
		cin >> a >> b;

		if (a % 10 == 0) v.push_back(10);
		else solution(a, b);

		if (b % v.size() == 0) cout << v[v.size() - 1] << "\n";
		else cout << v[b % v.size() - 1] << "\n";
	}

	return 0;
}