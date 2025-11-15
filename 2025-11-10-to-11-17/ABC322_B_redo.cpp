#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    int is_prefix = true;
    for(int i = 0; i < n; i++){
        if (s[i] != t[i]){
            is_prefix = false;
        }
    }

    int is_suffix = true;
    for (int i = 0; i < n; i++){
        if (s[i] != t[m-n+i]){
            is_suffix = false;
        }
    }

    if (is_prefix){
        cout << (is_suffix ? 0 : 1) << endl;
    }
    else{
        cout << (is_suffix ? 2 : 3) << endl;
    }
}