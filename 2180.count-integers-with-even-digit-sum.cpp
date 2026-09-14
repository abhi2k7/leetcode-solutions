/*
 * @lc app=leetcode id=2180 lang=cpp
 *
 * [2180] Count Integers With Even Digit Sum
 */

// @lc code=start
class Solution
{
public:
    int countEven(int num)
    {
        int cnt = 0;
        for (int i = 2; i <= num; i++)
        {
            int sm = 0;
            int temp = i;
            while (temp > 0)
            {
                sm += (temp % 10);
                temp /= 10;
            }
            if (sm % 2 == 0)
            {
                cnt += 1;
            }
        }
        return cnt;
    }
};
// @lc code=end
