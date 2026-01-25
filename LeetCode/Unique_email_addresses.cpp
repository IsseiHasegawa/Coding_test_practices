#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;
        st.reserve(emails.size()*2);

        for (string email : emails){
            size_t at = email.find('@');
            string cleanEmail;
            cleanEmail.reserve(email.size());
            
            for (int i = 0; i < at; i++){
                char c = email[i];
                if (c == '+') break;
                if (c == '.') continue;
                cleanEmail.push_back(c);
            }

            cleanEmail += email.substr(at);
            st.insert(cleanEmail);
        }

        return (int)st.size();
    }
};