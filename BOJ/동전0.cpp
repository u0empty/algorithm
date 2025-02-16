#include <iostream>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;
	vector<int> coin(N);
	for (int i = 0; i < N; i++) cin >> coin[i];

	int cnt = 0;
	for (int i = N - 1; i >= 0; i--) {
		if (coin[i] > K) continue;
		cnt += K / coin[i];
		K %= coin[i];
		if (K == 0) break;
	}
	cout << cnt;

	return 0;
}