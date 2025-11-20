#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, n;
    cin >> x >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++){
        cin >> w[i];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++){
        int p;
        cin >> p;
        --p;
        x += w[p];
        w[p] *= -1;
        cout << x << end;:
    }
    return 0;
}