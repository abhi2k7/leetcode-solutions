/*
 * @lc app=leetcode id=1394 lang=cpp
 *
 * [1394] Find Lucky Integer in an Array
 */

// @lc code=start
class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        unordered_map<int, int> freq;
        for (int num : arr)
        {
            freq[num]++;
        }
        int ans = -1;
        for (auto [key, value] : freq)
        {
            if (key == value)
            {
                ans = max(ans, key);
            }
        }
        return ans;
    }
};
// @lc code=end
