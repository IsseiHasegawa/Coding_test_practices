#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m, l;
    cin >> n >> m >> l;

    vector<vector<long long>> v1(n, vector<long long>(m, 0));
    vector<vector<long long>> v2(m, vector<long long>(l, 0));
    vector<vector<long long>> newV(n, vector<long long>(l, 0));

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
            long long sum = 0;
            for (int k = 0; k < m; k++){
                sum += v1[i][k] * v2[k][j];
            }
            newV[i][j] = sum;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < l; j++){
            if (j != l-1){
                cout << newV[i][j] << " ";
            } else {
                cout << newV[i][j] << endl;
            }
            
        }
    }

    return 0;
}