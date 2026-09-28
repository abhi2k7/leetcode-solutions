/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> solun(n, 1);
        for (int i = 1; i < n; i++)
        {
            solun[i] = solun[i - 1] * nums[i - 1];
        }
        int suffix = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            suffix *= nums[i + 1];
            solun[i] *= suffix;
        }
        return solun;
    }
};
// @lc code=end
