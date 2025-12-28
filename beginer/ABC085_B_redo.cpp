#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> V(N);
    for (int i = 0; i < N; i++){
        cin >> V[i];
    }

    set<int, greater<int>> set_d(V.begin(), V.end());
    cout << set_d.size() << endl;
}