#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	int na, nb, tmp;
	unordered_set<int> a, b;

	cin >> na >> nb;
	for (int i = 0; i < na; i++) {
		cin >> tmp;
		a.insert(tmp);
	}
	for (int i = 0; i < nb; i++) {
		cin >> tmp;
		b.insert(tmp);
	}

	int cnt = 0;
	for (int ai : a) {
		if (b.find(ai) == b.end()) cnt++;
	}
	for (int bi : b) {
		if (a.find(bi) == a.end()) cnt++;
	}

	cout << cnt;

	return 0;
}