// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem263.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=263 lang=cpp
 *
 * [263] Ugly Number
 */

#include<bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    bool isUgly(int n) {
        if(n == 0) return false;
        while(n % 2 == 0) n /= 2;
        while(n % 3 == 0) n /= 3;
        while(n % 5 == 0) n /= 5;
        return n == 1;
    }
};
// @lc code=end

