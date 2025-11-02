#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> vector_s(m);

    for (int i = 0; i < n; i++){
        cin >> vector_s[i];
    }

    vector<int> score(n);
    for (int i = 0; i < n; i++){
        vector<int> cnt(2);
        for (int j = 0; j < n; j++){
            cnt[vector_s[j][i]-'0']++;
        }
        if (cnt[0] == 0||cnt[1] == 0){
            for (int j = 0; j < n; j++){
                score[j]++;
            }
        }
        else{
            int win = 0;
            if (cnt[1] < cnt[0]){
                win = 1;
            }
            for (int j = 0; j < n; j++){
                if (vector_s[j][i]-'0' == win){
                    score[j]++;
                }
            }
        }

        int mx = 0;
        for (int i = 0; i < n; i++){
            mx = max(mx, score[i]);
        }
        for (int i = 0; i; i++){
            if (score[i] == mx){
                cout << i + 1 << ' ';
            }
        }
    }
    cout << endl;


    return 0;
}