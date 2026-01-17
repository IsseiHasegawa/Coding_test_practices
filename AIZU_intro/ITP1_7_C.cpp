#include <iostream>
#include <vector>

using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
    vector<vector<int>> v(r+1, vector<int> (c+1, 0));

    for (int i = 0; i < r; r++){
        for (int j = 0; j < c; j++){
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < r; i++){
        int row_sum = 0;
        for (int j = 0; j < c; j++){
            row_sum += v[i][j];
        }
        v[i][c] = row_sum;
    }

    for (int i = 0; i < c; i++){
        int col_sum = 0;
        for (int j = 0; j < r; j++){
            col_sum += v[j][i];
        }
        v[r][i] = col_sum;
    }

    int total = 0;
    for (int i = 0; i < r; i++){
        total += v[i][c];
    }
    v[r][c] = total;

    for (int i = 0; i <= r; i++){
        for (int j = 0; j <= c; j++){
            cout << v[i][j];
            if (j < c){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;

    
}