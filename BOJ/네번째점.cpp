#include <iostream>
#include <vector>

using namespace std;

int numX[1001] = { 0, };
int numY[1001] = { 0, };
vector<int> v;

int main() {
	for (int i = 0; i < 3; i++) {
		int x, y;
		cin >> x >> y;
		numX[x]++;
		numY[y]++;
		v.push_back(x);
		v.push_back(y);
	}

	for (int i = 0; i < v.size(); i++) {
		if (numX[v[i]] == 1) {
			cout << v[i] << " ";
			break;
		}
	}

	for (int i = 0; i < v.size(); i++) {
		if (numY[v[i]] == 1) {
			cout << v[i] << " ";
			break;
		}
	}

	return 0;
}