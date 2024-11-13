#include <iostream>

using namespace std;

int n;
int cnt[10001] = { 0, };

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		cnt[num]++;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < cnt[i]; j++) {
			cout << i << "\n";
		}
	}

	return 0;
}