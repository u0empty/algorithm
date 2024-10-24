#include <iostream>

using namespace std;

int X;
int a = 0;
int b = 1;
int cnt = 0;
int hap = 2;
bool flag; // false면 a가 줄어드는 추세

int check() {
	if (cnt == X) {
		cout << a << "/" << b;
		return 1;
	}
	else return 0;
}

int main() {
	cin >> X;

	while (true) {
		if (cnt == X) {
			break;
		}

		if (flag) {
			for (int i = 0; i < hap - 1; i++) {
				if (i == 0) {
					b++;
					cnt++;
				}
				else {
					a++;
					b = hap - a;
					cnt++;
				}
				if (check()) break;
			}
			hap++;
			flag = !flag;
		}
		else {
			for (int i = 0; i < hap - 1; i++) {
				if (i == 0) {
					a++;
					cnt++;
				}
				else {
					b++;
					a = hap - b;
					cnt++;
				}
				if (check()) break;
			}
			hap++;
			flag = !flag;
		}
	}

	return 0;
}