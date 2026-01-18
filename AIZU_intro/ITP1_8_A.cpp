#include <iostream>
#include <cctype>

using namespace std;

int main(){
    string s, new_s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++){
        if (isalpha(s[i])){
            if (islower(s[i])){
                new_s.push_back(toupper(s[i]));
            } else {
                new_s.push_back(tolower(s[i]));
            }
        } else {
            new_s.push_back(s[i]);
        }
    }

    cout << new_s << endl;
    return 0;
}