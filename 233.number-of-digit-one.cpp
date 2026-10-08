/*
 * @lc app=leetcode id=233 lang=cpp
 *
 * [233] Number of Digit One
 */

// @lc code=start
class Solution
{
public:
    int countDigitOne(int n)
    {
        long long factor = 1, count = 0;
        while (factor <= n)
        {
            long long higher = n / (factor * 10);
            long long lower = n % factor;
            long long current = (n / factor) % 10;
            if (current == 0)
            {
                count += (higher * factor);
            }
            else if (current == 1)
            {
                count += higher * factor + lower + 1;
            }
            else
            {
                count += (higher + 1) * factor;
            }
            factor *= 10;
        }
        return count;
    }
};
// @lc code=end
