#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    string c1, c2;
    for (int i = 1; i <= t; i++) {
        cin >> c1 >> c2;
        if (c1 == c2) cout << "E\n";
        else if (c1 == "red") {
            if (c2 == "orange" || c2 == "purple") cout << "A\n";
            else if (c2 == "green") cout << "C\n";
            else cout << "X\n";
        }
        else if (c1 == "orange") {
            if (c2 == "red" || c2 == "yellow") cout << "A\n";
            else if (c2 == "blue") cout << "C\n";
            else cout << "X\n";
        }
        else if (c1 == "yellow") {
            if (c2 == "orange" || c2 == "green") cout << "A\n";
            else if (c2 == "purple") cout << "C\n";
            else cout << "X\n";
        }
        else if (c1 == "green") {
            if (c2 == "yellow" || c2 == "blue") cout << "A\n";
            else if (c2 == "red") cout << "C\n";
            else cout << "X\n";
        }
        else if (c1 == "blue") {
            if (c2 == "green" || c2 == "purple") cout << "A\n";
            else if (c2 == "orange") cout << "C\n";
            else cout << "X\n";
        }
        else {
            if (c2 == "blue" || c2 == "red") cout << "A\n";
            else if (c2 == "yellow") cout << "C\n";
            else cout << "X\n";
        }
    }
    return 0;
}