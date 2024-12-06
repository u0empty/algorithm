#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	int k, tmp;

	cin >> k;
	int sum = 0;

	for (int i = 0; i < k; i++) {
		cin >> tmp;
		if (tmp == 0) {
			sum -= s.top();
			s.pop();
		}
		else {
			s.push(tmp);
			sum += tmp;
		}
	}
	cout << sum;

	return 0;
}