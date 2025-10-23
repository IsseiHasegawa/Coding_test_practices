/*
問題文
英大文字からなる文字列 S が与えられます。
ここで、S の長さは奇数です。
S の中央の文字を削除して得られる文字列を出力してください。
ただし、S の中央の文字とは S の長さを L として S の(L+1)/2​文字目の文字を指します。

制約
S は英大文字からなる文字列 
S の長さは 3 以上 9 以下の奇数
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    string N;
    cin >> N;
    int len = N.length();

    int mid_len = len / 2;

    for (int i = 0; i < len; i++){
        if (i != mid_len){
            cout << N[i];
        }
    }
    cout << endl;
}