/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution
{
public:
    int fib(int n)
    {
        int a = 0, b = 1;
        if (n == 0)
        {
            return a;
        }
        if (n == 1)
        {
            return b;
        }
        for (int i = 2; i <= n; i++)
        {
            int c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};
// @lc code=end
