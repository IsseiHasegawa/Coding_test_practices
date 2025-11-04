#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    vector<long long> a(n);
    cin >> a[0] >> a[1];

    for (int i = 2; i < n; i++){
        long long x = a[i-1] + a[i-2];
        string sx = to_string(x);
        reverse(sx.begin(), sx.end());
        a[i] = stoll(sx);
    }

    cout << a[9] << endl;

    return 0;
}