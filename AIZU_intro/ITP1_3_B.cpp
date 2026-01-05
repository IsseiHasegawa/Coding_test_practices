#include <iostream>

using namespace std;

int main(){
    for (int i = 1; i <= 10000; i++){
        int num;
        cin >> num;
        if (num == 0){
            break;
        } else {
            cout << "Case " << i << ": " << num << endl;
        }
    }

    return 0;
}