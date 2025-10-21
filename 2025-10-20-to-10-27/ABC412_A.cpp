/*
問題文
高橋君は N 日間のタスク目標を設定しました。
高橋君は i(1≤i≤N) 日目にA(i)個のタスクを完了することを目標としており、
実際にはB(i)個のタスクを完了しました。
高橋君が目標より多くのタスクを完了した日数を求めてください。

制約
1≤N≤100
1≤A i,
Bi≤100
入力される値はすべて整数
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int N, count = 0;
    cin >> N;
    int expect_task, real_task;
    for (int i = 0; i < N; i++){
        cin >> expect_task;
        cin >> real_task;
        if (expect_task < real_task){
            count += 1;
        }
    }
    cout << count << endl;

}