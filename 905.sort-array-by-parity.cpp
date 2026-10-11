/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */

// @lc code=start
class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int l = 0, r = nums.size() - 1;
        while (l < r)
        {
            while (l < r && (nums[l] % 2 == 0))
            {
                l += 1;
            }
            while (l < r && (nums[r] % 2 != 0))
            {
                r -= 1;
            }
            swap(nums[l], nums[r]);
        }
        return nums;
    }
};
// @lc code=end
