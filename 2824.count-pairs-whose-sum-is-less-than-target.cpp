/*
 * @lc app=leetcode id=2824 lang=cpp
 *
 * [2824] Count Pairs Whose Sum is Less than Target
 */

// @lc code=start
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size() - 1;
        int count = 0;
        while (l < r) {
            int sm = nums[l] + nums[r];
            if (sm < target) {
                count += r - l;
                l++;
            } else {
                r--;
            }
        }
        return count;
    }
};
// @lc code=end

