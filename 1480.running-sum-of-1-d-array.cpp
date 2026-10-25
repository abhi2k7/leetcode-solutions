/*
 * @lc app=leetcode id=1480 lang=cpp
 *
 * [1480] Running Sum of 1d Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> running_sum;
        running_sum.push_back(nums[0]);
        for (int i = 1; i < n; i++)
        {
            int sm = running_sum[i - 1] + nums[i];
            running_sum.push_back(sm);
        }
        return running_sum;
    }
};
// @lc code=end
