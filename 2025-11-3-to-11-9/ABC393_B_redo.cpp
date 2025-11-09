#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i < s.size(); i++){
        for (int j = i+1; j < s.size(); j++){
            for (int k = j+1; k < s.size(); k++){
                if (j-i == k-j && s[i] == 'A' && s[j] == 'B' && s[k] == 'C'){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
}