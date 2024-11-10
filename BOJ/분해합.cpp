#include <iostream>
#include <string>

using namespace std;

int n, x;
int jari, divi;

void getJari(int num) {
	divi = 1;
	string str = to_string(num);
	jari = str.size();
	for (int i = 0; i < jari - 1; i++) divi *= 10;
}

void solution() {
	if (jari == 1) {
		if (n % 2 == 0) cout << n / 2;
		else cout << 0;
		
		return;
	}

	if (n - 9 * jari < 0) x = n / 2;
	else x = n - 9 * jari;

	if (x / divi < 1) {
		jari--;
		divi /= 10;
	}

	int sum;
	int tmpX = x;
	int tmpDivi = divi;
	while (true) {
		if (x + 1 > n) {
			cout << 0;
			return;
		}

		sum = x;
		for (int i = 0; i < jari; i++) {
			sum += tmpX / tmpDivi;
			tmpX %= tmpDivi;
			tmpDivi /= 10;
		}

		if (sum == n) {
			cout << x;
			return;
		}

		if ((x + 1) == divi * 10) {
			jari++;
			divi *= 10;
		}
		x++;
		tmpX = x;
		tmpDivi = divi;
	}	
}

int main() {
	cin >> n;
	getJari(n);
	solution();

	return 0;
}