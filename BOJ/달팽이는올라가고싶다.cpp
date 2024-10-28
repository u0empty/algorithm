#include <iostream>

using namespace std;

int A, B, V;
int ans;

void input() {
    cin >> A >> B >> V;
}

void solution() {
    ans = (V - A) / (A - B);
    if ((V - A) % (A - B) == 0) ans += 1;
    else ans += 2;
}

int main() {
    input();
    solution();
    cout << ans;

    return 0;
}