#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    if (s[0] == '.'){
        s[0] = 'o';
    }
    for (int i = 0; i < s.size()-1; i++){
        if (s.substr(i, 2) == "#."){
            s[i+1] = 'o'; 
        }
    }

    cout << s << endl;
    return 0;
}