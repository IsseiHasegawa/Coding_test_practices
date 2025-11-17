#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin >> x;
    long long sum = 1, cnt = 1;
    while (x > sum){
        sum *= cnt;
        cnt++;
    }
    cout << cnt -1<< endl;
}