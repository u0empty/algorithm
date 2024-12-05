#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n, tmp;
	cin >> n;

	if (n == 1) {
		cout << "Nice";
		return 0;
	}

	stack<int> s;
	int line = 1;
	int cnt = 0;
	while (1) {
		if (line > n) break;
		if (cnt > n) break;

		if (!s.empty() && s.top() == line) {
			s.pop();
			line++;
			continue;
		}
		cin >> tmp;
		cnt++;
		if (tmp == line) {
			line++;
		}
		else {
			s.push(tmp);
		}
	}

	if (s.empty()) {
		cout << "Nice";
		return 0;
	}

	while (!s.empty()) {
		if (s.top() == line) {
			s.pop();
			line++;
		}
		else {
			cout << "Sad";
			return 0;
		}
	}
	cout << "Nice";

	return 0;
}