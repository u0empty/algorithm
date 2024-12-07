#include <iostream>
#include <queue>
using namespace std;

int n, x;
string order;
queue<int> q;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> order;

		if (order == "push") {
			cin >> x;
			q.push(x);
		}
		else if (order == "pop") {
			if (!q.empty()) {
				cout << q.front() << "\n";
				q.pop();
			}
			else cout << "-1\n";
		}
		else if (order == "size") {
			cout << q.size() << "\n";
		}
		else if (order == "empty") {
			cout << q.empty() << "\n";
		}
		else if (order == "front") {
			if (!q.empty()) {
				cout << q.front() << "\n";
			}
			else cout << "-1\n";
		}
		else {
			if (!q.empty()) {
				cout << q.back() << "\n";
			}
			else cout << "-1\n";
		}
	}

	return 0;
}