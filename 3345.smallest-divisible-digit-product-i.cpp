/*
 * @lc app=leetcode id=3345 lang=cpp
 *
 * [3345] Smallest Divisible Digit Product I
 */

// @lc code=start
class Solution
{
public:
    int smallestNumber(int n, int t)
    {
        int i = n, num;
        while (i >= n)
        {
            int temp = i, prod = 1;
            while (temp > 0)
            {
                prod *= temp % 10;
                temp /= 10;
            }
            if (prod % t == 0)
            {
                num = i;
                break;
            }
            i++;
        }
        return num;
    }
};
// @lc code=end
