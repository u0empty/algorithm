#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;
vector<string> img;
string tree;

void getTree(int y, int x, int s) {
	char c = img[y][x];
	for (int i = y; i < y + s; i++) {
		for (int j = x; j < x + s; j++) {
			if (img[i][j] != c) {
				int ns = s / 2;
				tree += '(';
				getTree(y, x, ns);
				getTree(y, x + ns, ns);
				getTree(y + ns, x, ns);
				getTree(y + ns, x + ns, ns);
				tree += ')';
				return;
			}
		}
	}
	tree += c;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	img.resize(n);
	for (int i = 0; i < n; i++) cin >> img[i];
	getTree(0, 0, n);
	cout << tree;

	return 0;
}