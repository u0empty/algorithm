#include <iostream>
#include <string>
#include <set>
using namespace std;

string str;
set<string> s;

int main() {
	cin >> str;

	string tmp;
	for (int i = 1; i <= str.length(); i++) {
		for (int j = 0; j <= str.length() - i; j++) {
			for (int k = j; k < j + i; k++) {
				tmp += str[k];
			}
			s.insert(tmp);
			tmp = "";
		}
	}

	cout << s.size();

	return 0;
}