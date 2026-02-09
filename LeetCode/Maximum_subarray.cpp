#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++){
            current = max(nums[i], nums[i]+current);
            ans = max(ans, current);
        }

        return ans;
    }
};