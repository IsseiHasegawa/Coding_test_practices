#include <bits/stdc++.h>
using namespace std;

int main(){
    int s, a, b, x; cin >> s >> a >> b >> x;
    int quotient = x / (a + b);
    int quo_dis = quotient * s * a;
    int remainder = x % (a + b);
    int remainder_dis = min(a, remainder) * s;

    cout << quo_dis + remainder_dis <<endl;
}

// 再度確認必要