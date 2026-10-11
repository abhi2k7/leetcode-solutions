/*
 * @lc app=leetcode id=3866 lang=cpp
 *
 * [3866] First Unique Even Element
 */

// @lc code=start
class Solution
{
public:
    int firstUniqueEven(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        for (auto num : nums)
            freq[num]++;
        for (int num : nums)
            if (freq[num] == 1 && num % 2 == 0)
                return num;
        return -1;
    }
};
// @lc code=end
