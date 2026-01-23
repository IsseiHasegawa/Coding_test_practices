#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        unordered_set<int> inter;

        for (int x : nums2){
            if (s.count(x)){
                inter.insert(x);
            }
        }

        return vector<int> (inter.begin(), inter.end());

        
    }
};

