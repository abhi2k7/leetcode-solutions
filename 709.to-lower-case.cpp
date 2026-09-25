/*
 * @lc app=leetcode id=709 lang=cpp
 *
 * [709] To Lower Case
 */

// @lc code=start
class Solution
{
public:
    string toLowerCase(string s)
    {
        string result = "";
        for (char ch : s)
        {
            result += tolower(ch);
        }
        return result;
    }
};
// @lc code=end
