#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m;
vector<int> v;

int binarySearch(int num) {
	int start = 0;
	int end = n - 1;
	int mid;

	while (start <= end) {
		mid = (start + end) / 2;

		if (v[mid] == num) {
			return 1;
		}
		else if (v[mid] < num) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}

	return 0;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
	cin >> n;
	for (int i = 0; i < n; i++) {
		int card;
		cin >> card;
		v.push_back(card);
	}
	sort(v.begin(), v.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		cout << binarySearch(num) << " ";
	}

	return 0;
}