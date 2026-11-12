/*
 * @lc app=leetcode id=3105 lang=cpp
 *
 * [3105] Longest Strictly Increasing or Strictly Decreasing Subarray
 */

// @lc code=start
class Solution
{
public:
    int longestMonotonicSubarray(vector<int> &nums)
    {
        int n = nums.size(), i = 0, ans = 0;
        int incr = 1, decr = 1;
        if (n == 1)
            return 1;
        for (i = 1; i < n; i++)
        {
            if (nums[i] > nums[i - 1])
                incr++, decr = 1;
            else if (nums[i] < nums[i - 1])
                incr = 1, decr++;
            else
                incr = decr = 1;
            ans = max({ans, decr, incr});
        }
        return ans;
    }
};
// @lc code=end
