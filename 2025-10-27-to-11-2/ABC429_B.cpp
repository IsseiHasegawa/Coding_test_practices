#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    for (int i = 0; i < n; i++){
        vector<int> temp = v;
        temp.erase(temp.begin() + i); 
        int  sum = 0; 
        for (int j = 0; j < n-1; j++){
            sum+=temp.at(j);
        }
        if (sum == m){
            cout << "Yes" << endl;
            return 0;
        }

    }

    cout << "No" << endl;

    return 0;
}