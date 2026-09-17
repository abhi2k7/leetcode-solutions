/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sm1 = 0 , sm2 = (n * (n + 1)) / 2;
        for(int i:nums){
            sm1 += i;
        }
        return sm2 - sm1;

    } 
};
// @lc code=end

