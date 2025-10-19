#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> V(N);

    for (int i = 0; i < N; i++){
        cin >> V[i];
    }

    int X;
    cin >> X;

    for (int i = 0; i < N; i++){
        if (V[i] == X){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}