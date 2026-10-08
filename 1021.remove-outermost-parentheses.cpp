/*
 * @lc app=leetcode id=1021 lang=cpp
 *
 * [1021] Remove Outermost Parentheses
 */

// @lc code=start
class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        int balance = 0;
        string result = "";
        for (char ch : s)
        {
            if (ch == '(')
            {
                if (balance > 0)
                {
                    result += ch;
                }
                balance++;
            }
            else if (ch == ')')
            {
                balance--;
                if (balance > 0)
                {
                    result += ch;
                }
            }
        }
        return result;
    }
};
// @lc code=end
