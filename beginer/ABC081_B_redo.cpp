#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int cnt = 0;
    
    while (true){
        bool odd = false;
        for (int i = 0; i < n; i++){
            if (v[i] % 2 != 0){
                odd = true;
            }
        }

        if (odd){
            break;
        }
        for (int i = 0; i < n; i++){
            v[i] /= 2;
        }
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}