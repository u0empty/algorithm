#include <iostream>
using namespace std;

long long factorial(int num) {
	if (num == 0 || num == 1) return 1;
	return num * factorial(num - 1);
}

int main() {
	int n;
	cin >> n;
	cout << factorial(n);
	return 0;
}