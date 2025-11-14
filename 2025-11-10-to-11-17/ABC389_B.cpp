#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int i = 1;
    long long sum = 1;

    bool flag = true;
    while (flag){
        if (i == n){
            cout << i << endl;
            return 0;
        }
        else{
            sum *= i;
            if (sum == n){
                cout << i << endl;
                return 0;
            }
            i++;
        }
    }
    return 0;
}