#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int w[21][21][21] = { 0, };
    for (int i = 0; i <= 20; i++) {
        for (int j = 0; j <= 20; j++) {
            w[0][i][j] = 1;
            w[i][0][j] = 1;
            w[i][j][0] = 1;
        }
    }

    for (int i = 1; i <= 20; i++) {
        for (int j = 1; j <= 20; j++) {
            for (int k = 1; k <= 20; k++) {
                if (i < j && j < k) w[i][j][k] = w[i][j][k - 1] + w[i][j - 1][k - 1] - w[i][j - 1][k];
                else w[i][j][k] = w[i - 1][j][k] + w[i - 1][j - 1][k] + w[i - 1][j][k - 1] - w[i - 1][j - 1][k - 1];
            }
        }
    }

    int a, b, c, ans;
    while (1) {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1) break;
        if (a <= 0 || b <= 0 || c <= 0) ans = 1;
        else if (a > 20 || b > 20 || c > 20) ans = w[20][20][20];
        else ans = w[a][b][c];
        cout << "w(" << a << ", " << b << ", " << c << ") = " << ans << "\n";
    }
    return 0;
}