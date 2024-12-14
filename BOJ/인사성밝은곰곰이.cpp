#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<string> s;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if (str == "ENTER") {
            cnt += s.size();
            s.clear();
        }
        else {
            s.insert(str);
        }
    }
    cnt += s.size();

    cout << cnt;
    return 0;
}