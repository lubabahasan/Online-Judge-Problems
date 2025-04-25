#define nl '\n'

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        multimap<int, int> mlmp;

        for( int i = 0; i < nums.size(); i++){
            mlmp.insert(pair<int, int>(nums[i], i));
        }

        for( auto it1 = mlmp.begin(); it1 != mlmp.end(); it1++){
            auto temp = target - (it1->first);
            auto it2 = mlmp.find(temp);

            if(it2 != mlmp.end() && it2 != it1)
                return { it1->second, it2->second};
        }
        
        return {};
    }
};