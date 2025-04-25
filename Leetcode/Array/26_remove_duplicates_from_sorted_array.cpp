#define nl '\n'

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        auto i = unique(nums.begin(), nums.end());

        int k = i - nums.begin();

        return k;

    }
};