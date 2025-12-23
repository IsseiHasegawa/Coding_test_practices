#include <iostream>
using namespace std;

int main(){
    int cnt = 0;
    for (int i = 0; i < 3; i++){
        char current;
        cin >> current;
        if (current == '1'){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}