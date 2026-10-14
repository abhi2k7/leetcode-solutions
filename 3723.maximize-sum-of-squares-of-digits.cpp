/*
 * @lc app=leetcode id=3723 lang=cpp
 *
 * [3723] Maximize Sum of Squares of Digits
 */

// @lc code=start
class Solution
{
public:
    string maxSumOfSquares(int num, int sum)
    {
        if (sum > (9 * num))
            return "";
        string ans = "";
        for (int i = 0; i < num; i++)
        {
            int digit = min(9, sum);
            ans.push_back('0' + digit);
            sum -= digit;
        }
        if (sum > 0)
            return "";
        return ans;
    }
};
// @lc code=end
