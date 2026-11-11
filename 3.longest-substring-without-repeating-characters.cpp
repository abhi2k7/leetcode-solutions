/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> v(256, -1);
        int left = 0, x = 0;
        for (int right = 0; right < s.length(); right++)
        {
            char c = s[right];
            if (v[c] >= left)
            {
                left = v[c] + 1;
            }
            v[c] = right;
            x = max(x, right - left + 1);
        }
        return x;
    }
};
// @lc code=end
