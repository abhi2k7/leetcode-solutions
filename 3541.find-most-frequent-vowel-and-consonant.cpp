/*
 * @lc app=leetcode id=3541 lang=cpp
 *
 * [3541] Find Most Frequent Vowel and Consonant
 */

// @lc code=start
class Solution
{
public:
    int maxFreqSum(string s)
    {
        unordered_map<char, int> freq_vow;
        unordered_map<char, int> freq_cons;
        for (char ch : s)
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                freq_vow[ch]++;
            }
            else
            {
                freq_cons[ch]++;
            }
        }
        int mx1 = 0, mx2 = 0;
        for (auto [k, v] : freq_vow)
        {
            if (v > mx1)
            {
                mx1 = v;
            }
        }
        for (auto [k, v] : freq_cons)
        {
            if (v > mx2)
            {
                mx2 = v;
            }
        }
        return mx1 + mx2;
    }
};
// @lc code=end
