/*
 * @lc app=leetcode id=1281 lang=cpp
 *
 * [1281] Subtract the Product and Sum of Digits of an Integer
 */

// @lc code=start
class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int temp = n, prod = 1, sm = 0, diff;
        while (temp > 0)
        {
            prod *= (temp % 10);
            sm += (temp % 10);
            temp /= 10;
        }
        diff = prod - sm;
        return diff;
    }
};
// @lc code=end
