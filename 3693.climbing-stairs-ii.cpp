/*
 * @lc app=leetcode id=3693 lang=cpp
 *
 * [3693] Climbing Stairs II
 */

// @lc code=start
class Solution
{
public:
    int climbStairs(int n, vector<int> &costs)
    {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= 3; j++)
            {
                if (i - j >= 0)
                {
                    int jmpcost = j * j;
                    dp[i] = min(dp[i], dp[i - j] + costs[i - 1] + jmpcost);
                }
            }
        }
        return dp[n];
    }
};
// @lc code=end
