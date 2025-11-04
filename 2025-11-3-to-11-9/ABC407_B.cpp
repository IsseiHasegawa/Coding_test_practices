#include <bits/stdc++.h>
using namespace std;

int main(){
    int x , y;
    cin >> x >> y;

    int cntx = 0, cnty = 0, cntxy = 0;
    for (int i = 1; i <=6; i++){
        for (int j = 1; j <= 6; j++){
            if (i + j >= x && abs(i - j) >= y){
                cntxy++;
            }
            if (abs(i - j) >= y){
                cnty++;
            }
            if (i + j >= x){
                cntx++;
            }
        }
    }
    int cnt = cnty + cntx - cntxy;
    cout << fixed << setprecision(10) << static_cast<double>(cnt) / 36 << endl;
}