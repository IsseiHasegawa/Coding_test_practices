/*
問題文
高橋君は学校でゲームを楽しんでいます。チャイムが鳴ると同時にゲームが開始します。
高橋君はチャイムが鳴った直後から、以下の動作を繰り返し行います。

毎秒 S メートルの速さで 
A 秒間走る。その後の B 秒間は静止する。
チャイムが鳴ってから X 秒が経過するまでに、高橋君は合計何メートル走りますか？

制約
1≤S≤15
1≤A≤1000
1≤B≤1000
1≤X≤1000
入力される値はすべて整数
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int S, A, B, X, total=0;
    cin >> S >> A >> B >> X;

    int len = 0;
    int mode = 0, cnt = 0;

    for (int i = 0; i < X; i++){
        if (mode == 0){
            len++;
        }
        cnt++;
        if (mode == 0 && cnt == A){
            mode = 1; 
            cnt = 0;
        }
        else if (mode == 1 && cnt == B){
            mode = 0;
            cnt = 0;
        }
    }

    int ans = len * S;
    cout << ans << endl;


}