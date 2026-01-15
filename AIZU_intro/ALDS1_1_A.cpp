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
    
    for (int j = 0; j < n; j++){
        if (j != n-1){
            cout << v[j] << " ";
        } else {
            cout << v[j] << endl;;

        }
    }

    for (int i = 1; i < n; i++){
        int a = v[i];
        int b = i - 1;
        while (b >= 0 && v[b] > a){
            v[b+1] = v[b];
            b--;
        }
        v[b+1] = a;

        for (int j = 0; j < n; j++){
            if (j != n-1){
                cout << v[j] << " ";
            } else {
              cout << v[j] << endl;;

            }
        }
    }
    return 0;
}