#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int d = a / b;
    int m = a % b;
    double f = (double) a / b;

    cout << fixed << setprecision(5);
    cout << d << " " << m << " " << f << endl;
    return 0;
}