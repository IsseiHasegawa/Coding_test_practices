#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int sum = 0;
        int ans = 0;

        mp[0] = 1;

        for (int i : nums){
            sum += i;
            if (mp.count(sum-k)){
                ans += mp[sum-k];
            }

            mp[sum]++;
        }

        return ans;

        
    }
};