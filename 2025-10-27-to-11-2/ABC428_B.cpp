#include <bits/stdc++.h>
using namespace std;

int main(){     
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<string, int> cnt;
    for (int i = 0; i < n-k+1; i++){
        string t = s.substr(i, k);
        cnt[t]++;
    }

    int x = 0;
    for (auto p : cnt){
        x = max(x, p.second);
    }
    cout << x << endl;

    for (auto p :cnt){
        if (p.second == x){
            cout << p.first << endl;
        }
    }
    return 0;
}