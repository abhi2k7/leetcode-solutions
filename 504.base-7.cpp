/*
 * @lc app=leetcode id=504 lang=cpp
 *
 * [504] Base 7
 */

// @lc code=start
class Solution
{
public:
    string convertToBase7(int num)
    {
        string ans = "";
        int temp = abs(num);
        bool neg = num < 0;
        if (num == 0)
        {
            return "0";
        }
        while (temp > 0)
        {
            ans += to_string(temp % 7);
            temp /= 7;
        }
        reverse(ans.begin(), ans.end());
        if (neg)
        {
            return "-" + ans;
        }
        return ans;
    }
};
// @lc code=end
