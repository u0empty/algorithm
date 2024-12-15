#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	set<string> s;
	s.insert("ChongChong");

	string s1, s2;
	for (int i = 0; i < n; i++) {
		cin >> s1 >> s2;
		if (s.find(s1) != s.end()) {
			s.insert(s2);
		}
		else if (s.find(s2) != s.end()) {
			s.insert(s1);
		}
	}
	cout << s.size();

	return 0;
}