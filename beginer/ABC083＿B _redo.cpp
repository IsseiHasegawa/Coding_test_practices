#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A, B;
    cin >> A >> B;

    int sum = 0;
    for (int i = 0; i <= N; i++){
        string s = to_string(i);
        int c_sum = 0;
        for (char c : s){
            c_sum += c -'0';
        }
        if (c_sum >= A && c_sum <= B){
            sum += i;
        }
    }
    cout << sum << endl;
}