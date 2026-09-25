/*
 * @lc app=leetcode id=3110 lang=cpp
 *
 * [3110] Score of a String
 */

// @lc code=start
class Solution
{
public:
    int scoreOfString(string s)
    {
        int absolute_sum = 0;
        for (int i = 0, j = i + 1; i < s.length() - 1 && j < s.length(); i++, j++)
        {
            absolute_sum += abs(int(s[i]) - int(s[j]));
        }
        return absolute_sum;
    }
};
// @lc code=end
