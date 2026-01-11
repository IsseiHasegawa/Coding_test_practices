#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool card[4][14] = {};

    for (int i = 0; i < n; i++){
        char design;
        int num;
        cin >> design;
        cin >> num;
        if (design == 'S'){
            card[0][num] = true;
        } else if (design == 'H') {
            card[1][num] = true;
        } else if (design == 'C'){
            card[2][num] = true;
        } else {
            card[3][num] =true;
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 1; j <= 13; j++){
            if (!card[i][j]){
                if (i == 0){
                    cout << 'S ' << j << endl;
                } else if (i == 1){
                    cout << 'H ' << j << endl;
                } else if (i == 2){
                    cout << 'C ' << j << endl;
                } else {
                    cout << 'D ' << j << endl;                      
                }
            }
        }
    }

    return 0;
}