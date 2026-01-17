#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m, l;
    cin >> n >> m >> l;

    vector<vector<int>> v1(n, vector<int>(m, 0));
    vector<vector<int>> v2(m, vector<int>(l, 0));
    vector<vector<int>> newV(n, vector<int>(l, 0));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> v1[i][j];
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < l; j++){
            cin >> v2[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < l; j++){
            int sum = 0;
            for (int k = 0; k < m; k++){
                sum += v1[i][k] * v2[k][j];
            }
            newV[i][j] = sum;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < l; j++){
            cout << newV[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}