#include <iostream>
using namespace std;

int a, b, c;

long long solution(long long base, long long exp) {
	if (exp == 0) return 1;
	long long half = solution(base, exp / 2);
	long long ret = half * half % c;
	if (exp % 2 == 1) ret = ret * base % c;
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> a >> b >> c;
	cout << solution(a, b);
	return 0;
}