#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;
    cout << fixed << setprecision(0) << pow(pow(2, N) + 1, 2);

    return 0;
}