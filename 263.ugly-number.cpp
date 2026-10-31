/*
 * @lc app=leetcode id=263 lang=cpp
 *
 * [263] Ugly Number
 */

// @lc code=start
class Solution
{
public:
    bool isUgly(int n)
    {
        int temp = n;
        if (n == 0)
        {
            return false;
        }
        while (temp % 2 == 0)
        {
            temp /= 2;
        }
        while (temp % 3 == 0)
        {
            temp /= 3;
        }
        while (temp % 5 == 0)
        {
            temp /= 5;
        }
        return temp == 1;
    }
};
// @lc code=end
