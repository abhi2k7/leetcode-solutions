/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int currSum = 0, maxsum = INT_MIN;
        for (int i : nums)
        {
            currSum += i;
            maxsum = max(maxsum, currSum);
            if (currSum < 0)
            {
                currSum = 0;
            }
        }
        return maxsum;
    }
};
// @lc code=end
