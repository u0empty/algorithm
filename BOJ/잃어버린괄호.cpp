#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string str;
	cin >> str;
	
	vector<string> v;

	int prev = 0;
	int curr = str.find('-');
	while (curr != string::npos) {
		string tmp = str.substr(prev, curr - prev);
		v.push_back(tmp);
		prev = curr + 1;
		curr = str.find('-', prev);
	}
	v.push_back(str.substr(prev));

	vector<int> sums;
	for (int i = 0; i < v.size(); i++) {
		vector<int> v2;
		string str2 = v[i];
		prev = 0;
		curr = str2.find('+');
		while (curr != string::npos) {
			int num = stoi(str2.substr(prev, curr - prev));
			v2.push_back(num);
			prev = curr + 1;
			curr = str2.find('+', prev);
		}
		v2.push_back(stoi(str2.substr(prev)));

		int sum = 0;
		for (int j = 0; j < v2.size(); j++)
			sum += v2[j];
		sums.push_back(sum);
	}

	int ans = sums[0];
	for (int i = 1; i < sums.size(); i++)
		ans -= sums[i];
	cout << ans;

	return 0;
}