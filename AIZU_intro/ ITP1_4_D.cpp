#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);

    long long sum = 0;

    for (size_t i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(),v.end());

    cout << v[0] << " " << v[n-1] << " " << sum << endl;


    return 0;
}