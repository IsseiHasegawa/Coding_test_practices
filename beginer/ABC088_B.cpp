#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> v(N);

    for (int i = 0; i < N; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    int A = 0;
    int B = 0;

    for (int i = 0; i < N; i++){
        if (i % 2 == 0){
            A += v[i];
        }
        else{
            B += v[i];
        }
    }

    cout << A - B << endl;
    return 0;
}