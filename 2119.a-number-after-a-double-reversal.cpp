/*
 * @lc app=leetcode id=2119 lang=cpp
 *
 * [2119] A Number After a Double Reversal
 */

// @lc code=start
class Solution
{
public:
    bool isSameAfterReversals(int num)
    {
        int temp = num, rev1 = 0, rev2 = 0;
        while (temp > 0)
        {
            rev1 = (rev1 * 10) + (temp % 10);
            temp /= 10;
        }
        while (rev1 > 0)
        {
            rev2 = (rev2 * 10) + (rev1 % 10);
            rev1 /= 10;
        }
        return num == rev2;
    }
};
// @lc code=end
