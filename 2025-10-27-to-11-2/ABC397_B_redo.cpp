#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    char expected = 'i';
    for (char c : s){
        if (c == expected){
            expected = expected == 'i' ? 'o': 'i';
        }
        else {
            cnt++;
        }
    }

    if (expected == 'o'){
        cnt++;
    }

    cout << cnt << endl;
}