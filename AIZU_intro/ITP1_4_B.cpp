#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double n;
    cin >> n;

    double a = n * n * 3.141592653589;
    double p = n * 2 * 3.141592653589;

    cout << fixed << setprecision(5);
    cout << a << " " << p << endl;
    return 0;
}