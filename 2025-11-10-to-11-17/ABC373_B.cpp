#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    map<char, int> pos;
    for (int i = 0; i < 26; i++){
        pos[s[i]] = i;
    }
    int ans = 0;
    for (int i = 0; i < 25; i++){
        char from = 'A' + i;
        char to = from + 1;
        ans += abs(pos[from]-pos[to]);
    }

    cout << ans << endl;

}



