/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> solun;
        for (int i = 0; i < nums.size(); i++)
        {
            solun.push_back(nums[i] * nums[i]);
        }
        sort(solun.begin(), solun.end());
        return solun;
    }
};
// @lc code=end
