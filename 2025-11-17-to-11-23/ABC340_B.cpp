#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    vector<int> a(q);

    for (int i = 0; i < q; i++){
        int t, x;
        cin >> t >> x;
        if (t == 1){
            a.push_back(x);
        }
        else{
            cout << a[a.size()-x] << endl;
        }
    }

    return 0;
}