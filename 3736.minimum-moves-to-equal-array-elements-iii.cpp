/*
 * @lc app=leetcode id=3736 lang=cpp
 *
 * [3736] Minimum Moves to Equal Array Elements III
 */

// @lc code=start
class Solution
{
public:
    int minMoves(vector<int> &nums)
    {
        int step = 0;
        int n = nums.size();
        int mx = *max_element(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != mx)
            {
                int x = mx - nums[i];
                step += x;
            }
        }
        return step;
    }
};
// @lc code=end
