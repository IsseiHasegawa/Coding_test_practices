#include <iostream>
using namespace std;

int findSum(int n){
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i <= n; i++){
        sum = findSum(i);
        if (sum >= a && sum <= b){
            cnt += i;
        }
    }
    cout << cnt << endl;

    return 0;
}
