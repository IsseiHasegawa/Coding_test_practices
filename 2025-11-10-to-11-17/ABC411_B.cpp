#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n-1);

    for (int i = 0; i < n-1; i++){
        cin >> v[i];
    }

    for (int i = 0; i < n-1; i++){
        int dist = 0;

        for (int j = i+1; j < n; i++){
            dist += v[j-1];
            cout << dist << ' ';
        }
        cout << endl;
    }
    return 0;
}