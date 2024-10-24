#include <iostream>

using namespace std;

int T, C;

void solution() {
	cout << C / 25 << " ";
	C %= 25;
	cout << C / 10 << " ";
	C %= 10;
	cout << C / 5 << " ";
	cout << C % 5 << "\n";
}

void input() {
	cin >> T;
	for (int i = 0; i < T; ++i) {
		cin >> C;
		solution();
	}
}


int main() {
	input();
	return 0;
}