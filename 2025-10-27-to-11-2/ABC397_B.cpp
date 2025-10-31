#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    char expected = 'i';
    int cnt = 0;
    for (char c : s){
        if (c != expected){
            cnt++;
        }
        expected = c ^ 'i' ^ 'o';
    }
    if (s.back() == 'i'){
        cnt++;
    }
    cout << cnt << endl;
}