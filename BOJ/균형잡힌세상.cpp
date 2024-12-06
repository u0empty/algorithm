#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<char> v;

void isBalanced() {
	int idx = 0;
	while (idx < v.size() - 1 && !v.empty()) {
		if (v[idx] == '(' && v[idx + 1] == ')') {
			v.erase(v.begin() + idx);
			v.erase(v.begin() + idx);
			idx = 0;
		}
		else if (v[idx] == '[' && v[idx + 1] == ']') {
			v.erase(v.begin() + idx);
			v.erase(v.begin() + idx);
			idx = 0;
		}
		else idx++;
	}

	if (v.empty()) cout << "yes\n";
	else cout << "no\n";

	return;
}

int main() {
	while (1) {
		string str;
		getline(cin, str);
		if (str == ".") break;

		v.clear();
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == ')' || str[i] == '[' || str[i] == ']') {
				v.push_back(str[i]);
			}
		}
		if (v.empty()) cout << "yes\n";
		else isBalanced();
	}

	return 0;
}