/*
 * @lc app=leetcode id=3712 lang=cpp
 *
 * [3712] Sum of Elements With Frequency Divisible by K
 */

// @lc code=start
class Solution
{
public:
    int sumDivisibleByK(vector<int> &nums, int k)
    {
        int sum = 0;
        unordered_map<int, int> freq;
        for (int i : nums)
        {
            freq[i]++;
        }
        for (auto [i, j] : freq)
        {
            if (j % k == 0)
            {
                sum += i * j;
            }
        }
        return sum;
    }
};
// @lc code=end
