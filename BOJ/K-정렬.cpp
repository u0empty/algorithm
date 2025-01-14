#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int g = gcd(N, K);

    for (int start = 0; start < g; start++) {
        vector<int> group;
        for (int i = start; i < N; i += g) {
            group.push_back(A[i]);
        }

        sort(group.begin(), group.end());
        int expected = start;
        for (int num : group) {
            if (num != expected) {
                cout << "NO\n";
                return 0;
            }
            expected += g;
        }
    }

    cout << "YES\n";
    return 0;
}
