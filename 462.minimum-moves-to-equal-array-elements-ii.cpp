/*
 * @lc app=leetcode id=462 lang=cpp
 *
 * [462] Minimum Moves to Equal Array Elements II
 */

// @lc code=start
class Solution
{
public:
    int minMoves2(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int mid = nums[(nums.size() / 2)];
        long c = 0;
        for (int num : nums)
        {
            c += abs(num - mid);
        }
        return c;
    }
};
// @lc code=end
