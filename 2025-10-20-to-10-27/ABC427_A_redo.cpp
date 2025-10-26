#include <bits/stdc++.h>
using namespace std;

int main(){
    string S; cin >> S;
    int mid_length = S.length() / 2;

    for (int i = 0; i < S.length(); i++){
        if (i != mid_length){
            cout << S[i];
        }
    }
    cout << endl;
}

// erase使えばloopなしで書ける