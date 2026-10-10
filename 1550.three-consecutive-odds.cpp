/*
 * @lc app=leetcode id=1550 lang=cpp
 *
 * [1550] Three Consecutive Odds
 */

// @lc code=start
class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        for (int i = 1; i < arr.size() - 1; i++)
        {
            if (arr[i - 1] % 2 != 0 and arr[i] % 2 != 0 and arr[i + 1] % 2 != 0)
                return true;
        }
        return false;
    }
};
// @lc code=end
