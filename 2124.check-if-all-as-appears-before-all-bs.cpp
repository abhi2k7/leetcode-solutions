/*
 * @lc app=leetcode id=2124 lang=cpp
 *
 * [2124] Check if All A's Appears Before All B's
 */

// @lc code=start
class Solution
{
public:
    bool checkString(string s)
    {
        if (s.length() == 1)
            return true;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == 'b' && s[i + 1] == 'a')
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
