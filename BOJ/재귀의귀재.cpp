#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int T, cnt;
string str;

int isPalindrome(int l, int r, int lev) {
	cnt = max(cnt, lev);
	if (l >= r) return 1;
	else if (str[l] != str[r]) return 0;
	else return isPalindrome(l + 1, r - 1, lev + 1);
}

int main() {
	cin >> T;
	for (int i = 1; i <= T; ++i) {
		cin >> str;
		cnt = 0;
		cout << isPalindrome(0, str.length() - 1, 1) << " " << cnt << "\n";
	}
	return 0;
}