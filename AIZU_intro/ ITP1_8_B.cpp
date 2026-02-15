#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    while (cin >> x) {
        if (x == "0") break;

        int sum = 0;
        for (char c : x) sum += (c - '0');

        cout << sum << "\n";
    }
    return 0;
}