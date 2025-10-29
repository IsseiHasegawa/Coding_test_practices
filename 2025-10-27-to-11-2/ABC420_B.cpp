#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<string> s(N);
    for (int i = 0; i < N; i++){
        cin >> s[i];
    }


    vector<int> score(N);
    for (int i = 0; i < N; i++){
        vector<int> cnt(2);
        for (int j = 0; j < N; j++){
            cnt[s[j][i]-'0']++;
        }
        if (cnt[0] == '0'||cnt[1] == 0){
            for (int j = 0; j < N; j++){
                score[j]++;
            }
        }
        else{
            int win =0;
            if (cnt[1] < cnt[0]){
                win = 1;
            }
            for (int j = 0; j < N; j++){
                if (s[j][i]-'0' == win){
                    score[j]++;
                }
            }
        }
    }
    int mx = 0;
    for (int i = 0; i < N; i++){
        mx = max(mx, score[i]);
    }
    for (int i = 0; i < N; i++){
        if (score[i] == mx){
            cout << i+1 << ' ';
        }
    }
    cout << endl;
    return 0;
}