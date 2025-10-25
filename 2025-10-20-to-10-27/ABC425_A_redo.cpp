#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    int sum = 0;

    for (int i = 1; i <= N; i++){
        sum += pow(-1, i) * pow(i, 3);
    }

    cout << sum << endl;
}