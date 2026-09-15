/*
 * @lc app=leetcode id=3754 lang=cpp
 *
 * [3754] Concatenate Non-Zero Digits and Multiply by Sum I
 */

// @lc code=start
class Solution
{
public:
    long long sumAndMultiply(int n)
    {
        long long int sm = 0, temp = n, num;
        string rev = "";
        if (n == 0)
        {
            return 0;
        }
        while (temp > 0)
        {
            int digit = temp % 10;
            temp /= 10;
            if (digit != 0)
            {
                sm += digit;
                rev += to_string(digit);
            }
        }
        reverse(rev.begin(), rev.end());
        num = stoi(rev);
        return num * sm;
    }
};
// @lc code=end
