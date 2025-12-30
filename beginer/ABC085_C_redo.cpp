#include <iostream>

using namespace std;

int main(){
    int N, Y;
    cin >> N >> Y;
    int x_10000 = -1, y_5000 = -1, z_1000 = -1;
    for (int i = 0; i <= N; i++){
        for (int k = 0; k+i <= N; k++){
            int j = N - i - k;
            int total = 10000*i + 5000*k + 1000*j;
            if (total == Y){
                x_10000 = i;
                y_5000 = k;
                z_1000 = j;
            }
        }
    }

    cout << x_10000 << ' ' << y_5000 << ' ' << z_1000 << endl;
    return 0;
}