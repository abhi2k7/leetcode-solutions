/*
 * @lc app=leetcode id=2652 lang=cpp
 *
 * [2652] Sum Multiples
 */

// @lc code=start
class Solution
{
public:
    int sumOfMultiples(int n)
    {
        long int sm = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
            {
                sm += i;
            }
        }
        return sm;
    }
};
// @lc code=end
