/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;    //array value, indices
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            if(m.count(target - nums[i])){
                result.push_back(i);
                result.push_back(m[target - nums[i]]);
                return result;
            }
            m[nums[i]] = i;
        }
        return result;
    }
};
// @lc code=end

