/*
 * @lc app=leetcode id=1287 lang=cpp
 *
 * [1287] Element Appearing More Than 25% In Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int findSpecialInteger(vector<int> &arr)
    {
        unordered_map<int, int> freq;
        int n = arr.size() / 4;
        for (int val : arr)
        {
            freq[val]++;
        }
        for (auto &[k, v] : freq)
        {
            if (v > n)
                return k;
        }
        return -1;
    }
};
// @lc code=end
