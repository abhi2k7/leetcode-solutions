/*
 * @lc app=leetcode id=3688 lang=cpp
 *
 * [3688] Bitwise OR of Even Numbers in an Array
 */

// @lc code=start
class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        long ans = 0;
        for(int i : nums){
            if(i % 2 == 0){
                ans |= i;
            }
        }
        return ans;
    }
};
// @lc code=end

