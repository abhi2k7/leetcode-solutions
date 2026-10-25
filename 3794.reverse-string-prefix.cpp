/*
 * @lc app=leetcode id=3794 lang=cpp
 *
 * [3794] Reverse String Prefix
 */

// @lc code=start
class Solution
{
public:
    string reversePrefix(string s, int k)
    {
        string ans;
        for (int i = k - 1; i >= 0; i--)
        {
            ans += s[i];
        }
        for (int i = k; i < s.length(); i++)
        {
            ans += s[i];
        }
        return ans;
    }
};
// @lc code=end
