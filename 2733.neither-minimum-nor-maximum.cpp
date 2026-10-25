/*
 * @lc app=leetcode id=2733 lang=cpp
 *
 * [2733] Neither Minimum nor Maximum
 */

// @lc code=start
class Solution
{
public:
    int findNonMinOrMax(vector<int> &nums)
    {
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        int val = -1;
        for (int num : nums)
        {
            if (num != mx && num != mn)
            {
                val = num;
                break;
            }
        }
        return val;
    }
};
// @lc code=end
