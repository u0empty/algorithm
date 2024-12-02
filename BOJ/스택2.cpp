#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	int order;
	stack<int> s;
	for (int i = 0; i < t; i++) {
		cin >> order;
		if (order == 1) {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (order == 2 || order == 5) {
			if (s.empty()) cout << "-1\n";
			else {
				cout << s.top() << "\n";
				if (order == 2) s.pop();
			}
		}
		else if (order == 3) {
			cout << s.size() << "\n";
		}
		else {
			cout << s.empty() << "\n";
		}
	}

	return 0;
}