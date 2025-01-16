#include <iostream>
using namespace std;

int cnt1 = 0;
int cnt2 = 0;
int f[41];

int fib1(int n) {
    if (n <= 2) {
        cnt1++;
        return 1;
    }
    return (fib1(n - 1) + fib1(n - 2));
}

void fib2(int n) {
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= n; i++) {
        cnt2++;
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main() {
    int n;
    cin >> n;
    fib1(n);
    fib2(n);
    cout << cnt1 << " " << cnt2;
    return 0;
}