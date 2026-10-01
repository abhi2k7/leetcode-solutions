/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        vector<char> solun;
        for (char ch : s)
        {
            if (ch == '(' || ch == '[' || ch == '{')
            {
                solun.push_back(ch);
            }
            else
            {
                if (solun.empty())
                {
                    return false;
                }
                if (ch == ')' && solun.back() != '(' || ch == ']' && solun.back() != '[' || ch == '}' && solun.back() != '{')
                {
                    return false;
                }
                solun.pop_back();
            }
        }
        return solun.empty();
    }
};
// @lc code=end
