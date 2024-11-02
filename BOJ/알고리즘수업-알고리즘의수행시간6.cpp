#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n - 2; i++) {
        ans += (n - i) * (n - (i + 1)) / 2;
    }

    cout << fixed << setprecision(0) << ans << "\n" << 3;

    return 0;
}