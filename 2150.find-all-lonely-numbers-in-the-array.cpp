/*
 * @lc app=leetcode id=2150 lang=cpp
 *
 * [2150] Find All Lonely Numbers in the Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> findLonely(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        vector<int> ans;
        for (int num : nums)
        {
            freq[num]++;
        }
        for (auto [k, v] : freq)
        {
            if (v == 1 && freq.find(k - 1) == freq.end() && freq.find(k + 1) == freq.end())
            {
                ans.push_back(k);
            }
        }
        return ans;
    }
};
// @lc code=end
