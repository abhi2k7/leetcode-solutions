/*
 * @lc app=leetcode id=3833 lang=cpp
 *
 * [3833] Count Dominant Indices
 */

// @lc code=start
class Solution
{
public:
    int dominantIndices(vector<int> &nums)
    {
        int n = nums.size();
        int sum = nums[n - 1];
        int rytcnt = 1, cnt = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] * rytcnt > sum)
            {
                cnt++;
            }
            sum += nums[i];
            rytcnt++;
        }
        return cnt;
    }
};
// @lc code=end
