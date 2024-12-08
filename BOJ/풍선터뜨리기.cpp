#include <iostream>
#include <deque>
using namespace std;

int main() {
	int n, num;
	deque<pair<int, int>> dq;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num;
		dq.push_back({ i, num });
	}

	int move = dq.front().second;
	dq.pop_front();
	cout << "1 ";

	int cnt = move > 0 ? move - 1 : move + 1;
	while (!dq.empty()) {
		if (move > 0) {
			if (cnt == 0) {
				cout << dq.front().first;
				if (dq.size() != 1) cout << " ";
				move = dq.front().second;
				cnt = move > 0 ? move - 1 : move + 1;
				dq.pop_front();
			}
			else {
				dq.push_back(dq.front());
				dq.pop_front();
				cnt--;
			}
		}
		else {
			if (cnt == 0) {
				cout << dq.back().first;
				if (dq.size() != 1) cout << " ";
				move = dq.back().second;
				cnt = move > 0 ? move - 1 : move + 1;
				dq.pop_back();
			}
			else {
				dq.push_front(dq.back());
				dq.pop_back();
				cnt++;
			}
		}
	}

	return 0;
}