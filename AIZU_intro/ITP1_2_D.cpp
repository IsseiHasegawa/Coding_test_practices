#include <iostream>

using namespace std;

int main(){
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;

    int xv_r = x + r;
    int xv_l = x - r;
    int vh_u = y + r;
    int vh_d = y - r;

    if (xv_r <= W && xv_l >= 0 && vh_u <= H && vh_d >= 0){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}