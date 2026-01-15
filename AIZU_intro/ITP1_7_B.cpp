#include <iostream>
#include <vector>
using namespace std;

int main(){

    while (true){
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0){
            break;
        }
        
        vector<int> v(a);
        for (int i = 0; i < a; i++){
            v[i] = i+1;
        }

        long long count = 0;
        for (int i = 0; i < a; i++){
            for (int j = i+1; j < a; j++){
                for (int k = j+1; k < a; k++){
                    if (v[i]+v[j]+v[k]== b){
                        count++;
                    }
                }

            }
        }

        cout << count << endl;
        }

    return 0;
}