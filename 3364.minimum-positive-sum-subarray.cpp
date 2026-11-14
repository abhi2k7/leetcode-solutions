/*
 * @lc app=leetcode id=3364 lang=cpp
 *
 * [3364] Minimum Positive Sum Subarray
 */

// @lc code=start
class Solution
{
public:
    int minimumSumSubarray(vector<int> &nums, int l, int r)
    {
        int ans = INT_MAX;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int sm = 0;
            for (int j = i; j < n; j++)
            {
                sm += nums[j];
                int len = j - i + 1;
                if (len >= l && len <= r && sm > 0)
                {
                    ans = min(ans, sm);
                }
            }
        }
        if (ans == INT_MAX)
            return -1;
        return ans;
    }
};
// @lc code=end
