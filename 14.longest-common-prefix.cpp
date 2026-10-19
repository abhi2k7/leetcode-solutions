/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &x)
    {
        sort(x.begin(), x.end());
        int n = x.size();
        string ans = "";
        string a = x[0], b = x[n - 1];
        int i = 0, j = 0;
        while (i < a.length() && j < b.length())
        {
            if (a[i] != b[j])
            {
                break;
            }
            else
            {
                ans += a[i];
                i++;
                j++;
            }
        }
        return ans;
    }
};
// @lc code=end
