#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0 ; i < n; i++){
        cin >> v[i];
    }

    set<int> se;
    for (int i = 0 ; i < n; i++){
        se.insert(v[i]);
    }

    cout << se.size() << endl;
  
    return 0;
}