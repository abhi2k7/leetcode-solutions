/*
 * @lc app=leetcode id=961 lang=cpp
 *
 * [961] N-Repeated Element in Size 2N Array
 */

// @lc code=start
class Solution
{
public:
    int repeatedNTimes(vector<int> &nums)
    {
        int n = nums.size() / 2;
        unordered_map<int, int> freq;
        for (int num : nums)
        {
            freq[num]++;
        }
        for (auto &[k, v] : freq)
        {
            if (v == n)
            {
                return k;
            }
        }
        return -1;
    }
};
// @lc code=end
