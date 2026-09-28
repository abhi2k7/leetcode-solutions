/*
 * @lc app=leetcode id=260 lang=cpp
 *
 * [260] Single Number III
 */

// @lc code=start
class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        vector<int> solun;
        for (int num : nums)
        {
            freq[num]++;
        }
        for (auto [key, value] : freq)
        {
            if (value == 1)
            {
                solun.push_back(key);
            }
        }
        return solun;
    }
};
// @lc code=end
