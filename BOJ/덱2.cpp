#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	deque<int> dq;
	int n, order, x;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> order;
		if (order == 1) {
			cin >> x;
			dq.push_front(x);
		}
		else if (order == 2) {
			cin >> x;
			dq.push_back(x);
		}
		else if (order == 3 || order == 7) {
			if (!dq.empty()) {
				cout << dq.front() << "\n";
				 if (order == 3) dq.pop_front();
			}
			else cout << "-1\n";
		}
		else if (order == 4 || order == 8) {
			if (!dq.empty()) {
				cout << dq.back() << "\n";
				if (order == 4) dq.pop_back();
			}
			else cout << "-1\n";
		}
		else if (order == 5) {
			cout << dq.size() << "\n";
		}
		else {
			cout << dq.empty() << "\n";
		}
	}

	return 0;
}