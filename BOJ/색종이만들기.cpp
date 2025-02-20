#include <iostream>
#include <vector>
using namespace std;

int n;
int arr[130][130] = { 0, };
int wh = 0;
int bl = 0;

void getCnt(int y, int x, int size, bool flag = false) {
	int color = arr[y][x];
	for (int i = y; i < y + size; i++) {
		if (flag) break;
		for (int j = x; j < x + size; j++) {
			if (arr[i][j] != color) {
				flag = true;
				break;
			}
		}
	}

	if (!flag) {
		if (color == 0) wh++;
		else bl++;
	}
	else {
		int nsize = size / 2;
		getCnt(y, x, nsize);
		getCnt(y, x + nsize, nsize);
		getCnt(y + nsize, x, nsize);
		getCnt(y+ nsize, x+ nsize, nsize);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];

	getCnt(0, 0, n);
	cout << wh << "\n" << bl;

	return 0;
}