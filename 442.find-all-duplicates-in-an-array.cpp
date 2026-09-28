/*
 * @lc app=leetcode id=442 lang=cpp
 *
 * [442] Find All Duplicates in an Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> solun;
        unordered_map<int, int> freq;
        for (int num : nums)
        {
            freq[num]++;
        }
        for (auto pair : freq)
        {
            if (pair.second == 2)
            {
                solun.push_back(pair.first);
            }
        }
        return solun;
    }
};
// @lc code=end
