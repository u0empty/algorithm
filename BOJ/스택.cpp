#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, tmp;
	string str;
	stack<int> s;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			cin >> tmp;
			s.push(tmp);
		}
		else if (str == "size") {
			cout << s.size() << "\n";
		}
		else if (str == "empty") {
			cout << s.empty() << "\n";
		}
		else {
			if (s.size() == 0) cout << -1 << "\n";
			else {
				cout << s.top() << "\n";
				if (str == "pop") s.pop();
			}
		}
	}
	return 0;
}