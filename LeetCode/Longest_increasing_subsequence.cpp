#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> rest;

        for (int i = 0; i < nums.size(); i++){
            auto it = lower_bound(rest.begin(), rest.end(), nums[i]);
            if (it == rest.end()) rest.push_back(nums[i]);
            else *it = nums[i];
        }

        return rest.size();
    }
};