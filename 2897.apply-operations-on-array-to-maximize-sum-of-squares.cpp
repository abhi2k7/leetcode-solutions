/*
 * @lc app=leetcode id=2897 lang=cpp
 *
 * [2897] Apply Operations on Array to Maximize Sum of Squares
 */

// @lc code=start
class Solution
{
public:
    int maxSum(vector<int> &nums, int k)
    {
        long long mod = 1e9 + 7;
        vector<int> count(31, 0);
        for (int num : nums)
        {
            for (int bit = 0; bit < 31; bit++)
            {
                if (num & 1 << bit)
                {
                    count[bit]++;
                }
            }
        }
        long long ans = 0;
        for (int i = 0; i < k; i++)
        {
            long long x = 0;
            for (int bit = 0; bit < 31; bit++)
            {
                if (count[bit] > 0)
                {
                    x |= (1LL << bit);
                    count[bit]--;
                }
            }
            ans = (ans + x * x) % mod;
        }
        return ans;
    }
};
// @lc code=end
