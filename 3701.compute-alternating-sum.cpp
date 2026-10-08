/*
 * @lc app=leetcode id=3701 lang=cpp
 *
 * [3701] Compute Alternating Sum
 */

// @lc code=start
class Solution
{
public:
    int alternatingSum(vector<int> &nums)
    {
        int alter_Sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                alter_Sum += nums[i];
            }
            else
            {
                alter_Sum -= nums[i];
            }
        }
        return alter_Sum;
    }
};
// @lc code=end
