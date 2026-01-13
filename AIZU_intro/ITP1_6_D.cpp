#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int first_v[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> first_v[i][j];
        }
    }

    int b;
    cin >> b;
    int second_v[b-1];
    for (int i = 0; i < b; i++){
        cin >> second_v[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            sum += first_v[i][j] * second_v[j];
        }
        cout << sum << endl;
        sum = 0;
    }
}