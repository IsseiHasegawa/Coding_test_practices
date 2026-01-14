#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; 
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int curr_max = 0;

    for (int i = 0; i < n; i++){
        if (v[i] > curr_max){
            curr_max = v[i];
        }
    }
    return 0;
}