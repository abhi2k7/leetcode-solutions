/*
 * @lc app=leetcode id=1614 lang=cpp
 *
 * [1614] Maximum Nesting Depth of the Parentheses
 */

// @lc code=start
class Solution
{
public:
    int maxDepth(string s)
    {
        int ans = 0, x = 0;
        for (auto &i : s)
        {
            if (i == '(')
                x++;
            if (i == ')')
                x--;
            ans = max(ans, x);
        }
        return ans;
    }
};
// @lc code=end
