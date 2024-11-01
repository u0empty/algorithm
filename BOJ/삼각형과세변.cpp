#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a, b, c;
vector<int> v;

void input() {
	cin >> a >> b >> c;

	v.clear();
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);

	sort(v.begin(), v.end());
}

bool solution() {
	if (a == 0) return 0;

	if (a == b && b == c) {
		cout << "Equilateral\n";
		return 1;
	}

	if (v[2] >= v[0] + v[1]) {
		cout << "Invalid\n";
		return 1;
	}

	if (a == b || b == c || a == c) {
		cout << "Isosceles\n";
		return 1;
	}

	cout << "Scalene\n";
	return 1;
}

int main() {
	while (true) {
		input();
		bool flag = solution();
		if (!flag) break;
	}

	return 0;
}