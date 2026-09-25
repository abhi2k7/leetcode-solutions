/*
 * @lc app=leetcode id=2828 lang=cpp
 *
 * [2828] Check if a String Is an Acronym of Words
 */

// @lc code=start
class Solution
{
public:
    bool isAcronym(vector<string> &words, string s)
    {
        string new_string = "";
        for (string word : words)
        {
            new_string += word[0];
        }
        return new_string == s;
    }
};
// @lc code=end
