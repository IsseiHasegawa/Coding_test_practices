#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool card[4][13] = {};

    for (int i = 0; i < n; i++){
        char design;
        int num;
        cin >> design;
        cin >> num;
        if (design == 'S'){
            card[0][num-1] = true;
        } else if (design == 'H') {
            card[1][num-1] = true;
        } else if (design == 'C'){
            card[2][num-1] = true;
        } else {
            card[3][num-1] = true;
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 13; j++){
            if (!card[i][j]){
                if (i == 0){
                    cout << "S " << j+1 << endl;
                } else if (i == 1){
                    cout << "H " << j+1 << endl;
                } else if (i == 2){
                    cout << "C " << j+1 << endl;
                } else {
                    cout << "D " << j+1 << endl;                      
                }
            }
        }
    }

    return 0;
}