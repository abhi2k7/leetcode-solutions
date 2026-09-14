/*
 * @lc app=leetcode id=3925 lang=cpp
 *
 * [3925] Concatenate Array With Reverse
 */

// @lc code=start
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>nums1 = nums;
        reverse(nums1.begin(),nums1.end());
        nums.insert(nums.end(),nums1.begin(),nums1.end());
        return nums;
    }
};
// @lc code=end

