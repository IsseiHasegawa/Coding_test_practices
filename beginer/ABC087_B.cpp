#include <iostream>

using namespace std;

int main(){
    int n500, n100, n50, target, cnt = 0;
    cin >> n500 >> n100 >> n50;
    cin >> target;

    for (int i = 0; i <= n500; i++){
        for (int j = 0; j <= n100; j++)
            for (int k = 0; k <= n50; k++){
                int total = 500 * i + 100 * j + 50 * k;
                if (total == target){
                    cnt++;
                }
            }
    }
    
    cout << cnt << endl;

}