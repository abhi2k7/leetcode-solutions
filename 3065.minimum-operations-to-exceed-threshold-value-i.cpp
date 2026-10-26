/*
 * @lc app=leetcode id=3065 lang=cpp
 *
 * [3065] Minimum Operations to Exceed Threshold Value I
 */

// @lc code=start
class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int step = 0;
        for (int num : nums)
        {
            if (num < k)
            {
                step++;
            }
        }
        return step;
    }
};
// @lc code=end
