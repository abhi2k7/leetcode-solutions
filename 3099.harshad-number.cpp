/*
 * @lc app=leetcode id=3099 lang=cpp
 *
 * [3099] Harshad Number
 */

// @lc code=start
class Solution
{
public:
    int sumOfTheDigitsOfHarshadNumber(int x)
    {
        int temp = x, sm = 0;
        while (temp > 0)
        {
            sm += temp % 10;
            temp /= 10;
        }
        if (x % sm == 0)
        {
            return sm;
        }
        return -1;
    }
};
// @lc code=end
