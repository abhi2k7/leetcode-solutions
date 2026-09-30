/*
 * @lc app=leetcode id=1111 lang=cpp
 *
 * [1111] Maximum Nesting Depth of Two Valid Parentheses Strings
 */

// @lc code=start
class Solution
{
public:
    vector<int> maxDepthAfterSplit(string seq)
    {
        int cnt = 0, n = seq.size();
        vector<int> solun(n, 0);
        for (int i = 0; i < n; i++)
        {
            char ch = seq[i];
            if (ch == '(')
            {
                cnt++;
                solun[i] = cnt % 2;
            }
            else
            {

                solun[i] = cnt % 2;
                cnt--;
            }
        }
        return solun;
    }
};
// @lc code=end
