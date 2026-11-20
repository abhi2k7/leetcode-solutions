/*
 * @lc app=leetcode id=2427 lang=cpp
 *
 * [2427] Number of Common Factors
 */

// @lc code=start
class Solution
{
public:
    int commonFactors(int a, int b)
    {
        int x = 0, mn = min(a, b);
        for (int i = 1; i <= mn; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                x++;
            }
        }
        return x;
    }
};
// @lc code=end
