/*
 * @lc app=leetcode id=453 lang=cpp
 *
 * [453] Minimum Moves to Equal Array Elements
 */

// @lc code=start
class Solution
{
public:
    int minMoves(vector<int> &nums)
    {
        int mn = *min_element(nums.begin(), nums.end());
        int c = 0;
        for (int num : nums)
        {
            c += num - mn;
        }
        return c;
    }
};
// @lc code=end
