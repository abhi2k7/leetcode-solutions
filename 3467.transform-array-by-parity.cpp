/*
 * @lc app=leetcode id=3467 lang=cpp
 *
 * [3467] Transform Array by Parity
 */

// @lc code=start
class Solution
{
public:
    vector<int> transformArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> solun(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 != 0)
            {
                solun[i] = 1;
            }
        }
        sort(solun.begin(), solun.end());
        return solun;
    }
};
// @lc code=end
