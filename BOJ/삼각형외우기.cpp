/*
세 각의 크기가 모두 60이면, Equilateral
세 각의 합이 180이고, 두 각이 같은 경우에는 Isosceles
세 각의 합이 180이고, 같은 각이 없는 경우에는 Scalene
세 각의 합이 180이 아닌 경우에는 Error
*/
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