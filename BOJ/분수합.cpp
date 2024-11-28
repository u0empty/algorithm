#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main() {
	// numerator, denominator
	int an, ad, bn, bd;
	cin >> an >> ad >> bn >> bd;

	int cn = an * bd + bn * ad;
	int cd = ad * bd;

	int g = gcd(cn, cd);
	
	cout << cn / g << " " << cd / g;
}