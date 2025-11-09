#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    int cnt_add = 0, cnt_diff = 0, cnt_conf = 0;
    for (int i = 1; i <= 6; i++){
        for (int j = 1; j <= 6; j++){
            if (i + j >= A && abs(i - j) >= B){
                cnt_conf++;
            }
            
        }
    }

    for (int i = 1; i <= 6; i++){
        for (int j = 1; j <= 6; j++){
            if (i + j >= A){
                cnt_add++;
            }
            if (abs(i - j) >= B){
                cnt_diff++;
            }
            
        }
    }
    
    cout << fixed << setprecision(10) << (cnt_add + cnt_diff - cnt_conf) / 36.0 << endl;
    return 0;
}