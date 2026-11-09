/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        unordered_map<char, int> x;
        char diff = '\0';
        for (char ch : t)
        {
            x[ch]++;
        }
        for (char ch : s)
        {
            x[ch]--;
        }
        for (auto [k, v] : x)
        {
            if (v > 0)
            {
                diff += k;
            }
        }
        return diff;
    }
};
// @lc code=end
