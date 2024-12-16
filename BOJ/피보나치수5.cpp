#include <iostream>
using namespace std;

int fibonacci(int num) {
	if (num == 0) return 0;
	else if (num == 1) return 1;
	return fibonacci(num - 2) + fibonacci(num - 1);
}

int main() {
	int n;
	cin >> n;
	cout << fibonacci(n);
	return 0;
}