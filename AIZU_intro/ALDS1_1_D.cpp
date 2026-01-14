#include <iostream>
#include <algorithm>

using namespace std;
static const int MAX = 20000;

int main(){
    int r[MAX];

    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> r[i];
    }

    int maxv = -200000000;
    int mini = r[0];
    for (int i = 0; i < n;i++){
        int maxv = max(r[i], r[i] - mini);
        int mini = min(r[i], mini);
    }

    cout << maxv << endl;

    return 0;
}