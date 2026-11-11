/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 */

// @lc code=start
class Solution
{
public:
    bool isFreqSame(int freq1[], int freq2[])
    {
        for (int i = 0; i < 26; i++)
        {
            if (freq1[i] != freq2[i])
            {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2)
    {
        int freq[26] = {0};
        for (int i = 0; i < s1.length(); i++)
        {
            int ind = s1[i] - 'a';
            freq[ind]++;
        }
        int windsize = s1.length();
        for (int i = 0; i < s2.length(); i++)
        {
            int wi = 0;
            int idx = i;
            int wifreq[26] = {0};
            while (wi < windsize && idx < s2.length())
            {
                wifreq[s2[idx] - 'a']++;
                wi++;
                idx++;
            }
            if (isFreqSame(freq, wifreq))
            {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end
