/*
問題文
正整数 A と正の奇数 B が与えられます。
実数 A/Bとの差が最小となる整数を出力してください。
ただし、制約のもとでそのような整数がただ一つ存在することが証明できます。

制約
1≤A≤407
1≤B≤407
B は奇数
入力はすべて整数
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    double flaction = double(A) / double(B);
    // cout << flaction - A/B << endl;
    if (flaction - (A/B) >= 0.5){
        cout << (A/B) + 1 << endl;
    }
    else{
        cout << (A/B) << endl;
    }

    return 0;

}