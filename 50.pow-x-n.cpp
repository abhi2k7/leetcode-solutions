/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution
{
public:
    double myPow(double x, int n)
    {
        long bin_n = n;
        if (n < 0)
        {
            x = 1 / x;
            bin_n = -bin_n;
        }
        double answer = 1;
        while (bin_n > 0)
        {
            if (bin_n % 2 == 1)
            {
                answer *= x;
            }
            x *= x;
            bin_n /= 2;
        }
        return answer;
    }
    };
    // @lc code=end
