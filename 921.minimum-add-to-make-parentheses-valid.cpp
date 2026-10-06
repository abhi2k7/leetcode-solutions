/*
 * @lc app=leetcode id=921 lang=cpp
 *
 * [921] Minimum Add to Make Parentheses Valid
 */

// @lc code=start
class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        int open = 0, result = 0;
        for (char ch : s)
        {
            if (ch == '(')
            {
                open++;
            }
            if (ch == ')')
            {
                if (open > 0)
                {
                    open--;
                }
                else
                {
                    result++;
                }
            }
        }
        result += open;
        return result;
    }
};
// @lc code=end
