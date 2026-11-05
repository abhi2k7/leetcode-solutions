/*
 * @lc app=leetcode id=400 lang=cpp
 *
 * [400] Nth Digit
 */

// @lc code=start
class Solution
{
public:
    int findNthDigit(int n)
    {
        int len = 1;
        long long count = 9;
        long long st = 1;
        while (n > len * count)
        {
            n -= len * count;
            len++;
            count *= 10;
            st *= 10;
        }
        long long x = st + (n - 1) / len;
        int index = (n - 1) % len;
        long long divisor = 1;
        for (int i = 0; i < len - index - 1; i++)
        {
            divisor *= 10;
        }
        return (x / divisor) % 10;
    }
};
// @lc code=end
