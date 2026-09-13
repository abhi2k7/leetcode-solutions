/*
 * @lc app=leetcode id=3895 lang=cpp
 *
 * [3895] Count Digit Appearances
 */

// @lc code=start
class Solution
{
public:
    int countDigitOccurrences(vector<int> &nums, int digit)
    {
        int cnt = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int temp = nums[i];
            while (temp > 0)
            {
                int dig = temp % 10;
                temp /= 10;
                if (digit == dig)
                {
                    cnt += 1;
                }
            }
        }
        return cnt;
    }
};
// @lc code=end
