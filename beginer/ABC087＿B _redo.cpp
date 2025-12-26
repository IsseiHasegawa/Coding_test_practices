#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(3);
    for (int i = 0; i < 3; i++){
        cin >> v[i];
    }

    int x, cnt = 0; 
    cin >> x;
    for (int i = 0; i <= v[0]; i++){
        for (int j = 0; j <= v[1]; j++){
            for (int k = 0; k <= v[2]; k++){
                int total = 500*i + 100*j + 50*k;
                if (total == x){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}