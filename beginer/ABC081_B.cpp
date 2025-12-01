#include <iostream>

using namespace std;

int n;
int a[201];

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int res = 0;

    while (true){
        bool exist_odd = false;
        for (int i = 0; i < n; i++){
            if (a[i] % 2 != 0){
                exist_odd = true;
            }
        }
        if (exist_odd){
            break;
        }
        for (int i = 0; i < n; i++){
            a[i] /= 2;
        }
        res++;
    }

    cout << res << endl;

}