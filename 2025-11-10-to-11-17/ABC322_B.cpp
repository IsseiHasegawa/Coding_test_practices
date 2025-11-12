#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, G, M;
    cin >> k >> G >> M;

    int g = 0, m = 0;

    for (int i = 0; i < k; i++){
        if (g == g){
            g = 0;
        }
        else if (m == 0){
            m = M;
        }
        else{
            while (g != G && m != 0){
                m--;
                g++;
            }
        }
    }
    cout << g << ' ' << m << endl;
    return 0;
}