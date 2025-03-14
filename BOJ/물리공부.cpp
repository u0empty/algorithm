#include <iostream>
using namespace std;

int main() {
	int T, A, B, V;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> A >> B >> V;
		int t = 0;
		int v = V;
		while (1) {
			t++;
			A += v;
			if (A >= B) break;
			v += V;
		}
		cout << t << "\n";
	}
	return 0;
}