#include <iostream>
#include <string>
#include <set>
using namespace std;

string str;
set<string> s;

int main() {
	cin >> str;

	for (int i = 1; i <= str.length(); i++) {
		for (int j = 0; j <= str.length() - i; j++) {
			s.insert(str.substr(j, i));
		}
	}
	cout << s.size();

	return 0;
}