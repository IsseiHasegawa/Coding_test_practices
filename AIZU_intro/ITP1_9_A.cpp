#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string toLower(string x) {
    for (char &c : x) c = (char)tolower((unsigned char)c);
    return x;
}

int main() {
    string s;
    cin >> s;
    s = toLower(s);

    string s2;
    int count = 0;

    while (cin >> s2) {
        if (s2 == "END_OF_TEXT") break;   // 先に判定（大文字のまま）
        s2 = toLower(s2);

        if (s == s2) count++;
    }

    cout << count << "\n";
    return 0;
}