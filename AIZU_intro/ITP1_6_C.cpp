#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int b, f, r, v;
    int count[4][3][10] = {};

    for(int i = 0; i < n; i++){
        cin >> b >> f >> r >> v;
    
        count[b-1][f-1][r-1] += v;
    }

    for (auto &a : count){
        for (auto &b : a){
            for (auto &c : b){
                cout << c << " ";
            }
            cout << endl;
        }
        cout << "####################" << endl;
    }
    return 0;
}