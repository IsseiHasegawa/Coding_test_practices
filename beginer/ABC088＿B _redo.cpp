#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> V(N);
    for (int i = 0; i < N; i++){
        cin >> V[i];
    }
    sort(V.begin(), V.end());
    vector<int> A,B;
    
    for (int i = 0; i < N; i++){
        if (i % 2 != 0){
            A.push_back(V[i]);
        }
        else {
            B.push_back(V[i]);
        }
    }

    int sumA = 0;
    for (size_t i = 0; i < A.size(); i++){
        sumA += A[i];
    }
    int sumB = 0;
    for (size_t i = 0; i < B.size(); i++){
        sumB += B[i];
    }
    cout << abs(sumA - sumB) << endl;
}