/*
 * @lc app=leetcode id=3644 lang=cpp
 *
 * [3644] Maximum K to Sort a Permutation
 */

// @lc code=start
class Solution
{
public:
    int sortPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int solun = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == i)
            {
                continue;
            }
            solun &= nums[i];
        }
        return solun == INT_MAX ? 0 : solun;
    }
};
// @lc code=end
