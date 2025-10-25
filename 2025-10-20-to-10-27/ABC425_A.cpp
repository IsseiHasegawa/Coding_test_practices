/*
問題文
正整数 N が与えられます。
i=1,2,…,N について (−1)^i×i^3 を計算したときの、
それら N 個の値の総和を求めてください。

制約
N は 1 以上 10 以下の整数
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 1; i <= N; i++){
        sum += int(pow(-1, i)) * int(pow(i, 3));
    }

    cout << sum << endl;
}