// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include<bits/stdc++.h>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=1 lang=cpp
 * This is simple comment
 ! This is error
 ? This is query comment
 TODO: Thisis a todo comment
 todo another way to declare todo comment
 @param myparam The parameter in this line with dark green color
 // Crossed comment
 * [1] Two Sum
 * ! This is 
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