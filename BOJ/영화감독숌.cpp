#include <iostream>
#include <string>

using namespace std;

int n, cnt = 0;
int num = 666;

int main() {
	cin >> n;
	while (cnt != n) {
		int idx = to_string(num).find("666");
		if (idx != -1) {
			cnt++;
			if (cnt == n) break;
		}
		num++;
	}
	cout << num;

	return 0;
}