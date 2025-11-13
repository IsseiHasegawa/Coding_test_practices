#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<char> cv(n);
    vector<long long> iv(n);

    for (int i = 0; i < n; i++){
        cin >> cv[i];
        cin >> iv[i];
    }

    long long sum = 0;
    for (size_t i = 0; i < n; i++){
        sum += iv[i];
        if (sum > 100){
            cout << "Too Long" << endl;
            return 0;
        }
    }
    
    for (size_t i = 0; i < n; i++){
        string s(iv[i], cv[i]);
        cout << s;
    }
    cout << endl;

    return 0;
}