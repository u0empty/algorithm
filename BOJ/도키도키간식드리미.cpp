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
	while (line <= n) {
		if (!s.empty() && s.top() == line) {
			s.pop();
			line++;
			continue;
		}
		cin >> tmp;
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