#include <iostream>
#include <vector>

using namespace std;

int sum = 0;
int num[181] = { 0, };
vector<int> v;

int main() {
	for (int i = 0; i < 3; i++) {
		int angle;
		cin >> angle;
		sum += angle;
		num[angle]++;
		v.push_back(angle);
	}

	if (sum != 180) {
		cout << "Error";
		return 0;
	}
	if (num[60] == 3) {
		cout << "Equilateral";
		return 0;
	}
	for (int i = 0; i < v.size(); i++) {
		if (num[v[i]] == 2) {
			cout << "Isosceles";
			return 0;
		}
	}
	cout << "Scalene";

	return 0;
}