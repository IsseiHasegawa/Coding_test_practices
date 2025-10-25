#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    double double_quotient = static_cast<double>(A) / B;
    int quotient = A / B;
    double double_quo_quo = double_quotient - quotient;
    if (double_quo_quo < 0.50){
        cout << quotient << endl;
    }
    else{
        cout << quotient + 1 << endl;
    }

    return 0;
}

// round使うのが一番簡単