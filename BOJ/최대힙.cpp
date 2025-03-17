#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, num;
	cin >> n;
	priority_queue<int, vector<int>> q;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num == 0) {
			if (q.empty()) cout << "0\n";
			else {
				cout << q.top() << "\n";
				q.pop();
			}
		}
		else {
			q.push(num);
		}
	}

	return 0;
}