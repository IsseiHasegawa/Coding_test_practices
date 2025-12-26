#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A, B;
    cin >> A >> B;

    int sum = 0;
    for (int i = 0; i <= 20; i++){
        string s = to_string(i);
        int c_sum = 0;
        for (char c : s){
            c_sum += c;
        }
        if (c_sum <= A && c_sum >= B){
            sum += c_sum;
        }
    }
    cout << sum << endl;
}