/*
 * @lc app=leetcode id=3783 lang=cpp
 *
 * [3783] Mirror Distance of an Integer
 */

// @lc code=start
class Solution
{
public:
    int mirrorDistance(int n)
    {
        int temp = n, rev = 0;
        while (temp > 0)
        {
            rev = (rev * 10) + (temp % 10);
            temp /= 10;
        }
        return abs(n - rev);
    }
};
// @lc code=end
