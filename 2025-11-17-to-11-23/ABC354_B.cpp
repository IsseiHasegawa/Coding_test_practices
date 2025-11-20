#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<string, int>> vp;
    for (int i = 0; i < n; i++){
        cin >> vp[i].first >> vp[i].second;
    }

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += vp[i].second;
    }

    string ans = vp[sum % n].first;
    cout << ans << endl;
    return 0;
}