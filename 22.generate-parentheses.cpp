/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution
{
public:
    vector<string> solun;
    void backtrack(string current, int open, int close, int n)
    {
        if (current.length() == 2 * n)
        {
            solun.push_back(current);
            return;
        }
        if (open < n)
        {
            backtrack(current + "(", open + 1, close, n);
        }
        if (close < open)
        {
            backtrack(current + ")", open, close + 1, n);
        }
    }
    vector<string> generateParenthesis(int n)
    {
        backtrack("", 0, 0, n);
        return solun;
    }
};
// @lc code=end
