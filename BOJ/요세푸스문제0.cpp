#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, k, num;
	queue<int> q;

	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	
	int cnt = 1;
	cout << "<";
	while (1) {
		if (cnt < k) {
			num = q.front();
			q.pop();
			q.push(num);
			cnt++;
		}
		else {
			cout << q.front();
			q.pop();
			if (!q.empty()) {
				cout << ", ";
				cnt = 1;
			}
			else break;
		}
	}
	cout << ">";

	return 0;
}