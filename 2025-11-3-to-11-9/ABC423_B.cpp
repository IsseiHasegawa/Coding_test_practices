#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int L = n, R = 0;
    for (int i = 0; i < n; i++){
        if (v[i] == 1){
            L = min(L, i);
            R = max(R, i);
        }
    }

    if (L == n){
        cout << 0 << endl;
    }
    else{
        cout << R - L << endl;
    }

    return 0;
}