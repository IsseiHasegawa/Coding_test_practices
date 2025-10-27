#include <bits/stdc++.h>

using namespace std;

int main(){
    string S; cin >> S;

    for (int i = 0; i < S.length(); i++){
        string T = string(i, '0') + S;
        string RT = T;
        reverse(RT.begin(), RT.end());
        if (T == RT){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}