#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    vector<long long> a(n);
    cin >> a[0] >> a[1];

    for (int i = 2; i < n; i++){
        long long sum = a[i-1] + a[i-2];
        string s_sum = to_string(sum);
        reverse(s_sum.begin(), s_sum.end());
        a[i] = stoll(s_sum);
    }

    cout << a[9] << endl;

}