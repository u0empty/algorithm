#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string n;
int num[10] = { 0, };

int main() {
	cin >> n;
	for (int i = 0; i < n.size(); i++) {
		num[i] = n[i] - '0';
	}
	sort(num, num + n.size(), greater<>());
	for (int i = 0; i < n.size(); i++) {
		cout << num[i];
	}

	return 0;
}