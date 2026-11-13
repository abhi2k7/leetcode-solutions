/*
 * @lc app=leetcode id=443 lang=cpp
 *
 * [443] String Compression
 */

// @lc code=start
class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int idx = 0;
        for (int i = 0; i < chars.size(); i++)
        {
            int cnt = 0;
            char ch = chars[i];
            while (i < chars.size() && chars[i] == ch)
            {
                cnt++;
                i++;
            }
            if (cnt == 1)
                chars[idx++] = ch;
            else
            {
                chars[idx++] = ch;
                string str = to_string(cnt);
                for (auto dig : str)
                {
                    chars[idx++] = dig;
                }
            }
            i--;
        }
        chars.resize(idx);
        return idx;
    }
};
// @lc code=end
