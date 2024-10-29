#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int n;
vector<int> v;

bool isPerfect(vector<int>& v) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			v.push_back(i);
			sum += i;
		}
	}

	return sum == n;
}

void solution() {
	v.clear();
	if (isPerfect(v)) {
		cout << n << " = ";
		for (int i = 0; i < v.size() - 1; i++) {
			cout << v[i] << " + ";
		}
		cout << v[v.size() - 1] << "\n";
		return;
	}
	cout << n << " is NOT perfect.\n";
}

int main() {
	while (true) {
		cin >> n;
		if (n == -1) return 0;
		solution();
	}

	return 0;
}