#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    // この書き方を理解する
    while (*s.rbegin() == '0'){
        s = s.substr(0, s.size()-1);
    }

    string reverse_s = s;
    reverse(reverse_s.begin(), reverse_s.end());
    if (s == reverse_s){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}