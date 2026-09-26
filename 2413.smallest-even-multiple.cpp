/*
 * @lc app=leetcode id=2413 lang=cpp
 *
 * [2413] Smallest Even Multiple
 */

// @lc code=start
class Solution
{
public:
    int smallestEvenMultiple(int n)
    {
        int smallest_mul = 0, i = 2;
        while (true)
        {
            if (i % 2 == 0 && i % n == 0)
            {
                smallest_mul = i;
                break;
            }
            i += 2;
        }
        return smallest_mul;
    }
};
// @lc code=end
