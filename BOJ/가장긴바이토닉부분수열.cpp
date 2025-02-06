#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];
int incr[1001]; // incr[i]: arr[i]로 끝나는 가장 긴 증가하는 수열
int decr[1001]; // decr[i]: arr[i]로 시작하는 가장 긴 감소하는 수열

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++) {
		incr[i] = 1;
		decr[i] = 1;
	}

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i]) {
				incr[i] = max({ incr[i], incr[j] + 1 });
			}
		}
	}

	for (int i = n - 2; i >= 0; i--) {
		for (int j = n - 1; j > i; j--) {
			if (arr[j] < arr[i]) {
				decr[i] = max({ decr[i], decr[j] + 1 });
			}
		}
	}
	
	int maxi = 0;
	for (int i = 0; i < n; i++)
		maxi = max(maxi, incr[i] + decr[i] - 1);
	cout << maxi;

	return 0;
}