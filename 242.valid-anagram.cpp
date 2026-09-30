/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<char, int> freq1;
        unordered_map<char, int> freq2;
        for (char ch : s)
        {
            freq1[ch]++;
        }
        for (char ch : t)
        {
            freq2[ch]++;
        }
        return freq1 == freq2;
    }
};
// @lc code=end
