/*
 * @lc app=leetcode id=2149 lang=cpp
 *
 * [2149] Rearrange Array Elements by Sign
 */

// @lc code=start
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> x(n, 0);
        int indexeven = 0, indexodd = 1;
        for (int num : nums) {
            if (num > 0) {
                x[indexeven] = num;
                indexeven += 2;
            } else if (num < 0) {
                x[indexodd] = num;
                indexodd += 2;
            }
        }
        return x;
    }
};
// @lc code=end

