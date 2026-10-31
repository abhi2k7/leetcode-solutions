/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int i, j, k;
        i = j = 0, k = nums.size() - 1;
        while (j <= k)
        {
            if (nums[j] == 0)
            {
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
            else if (nums[j] == 1)
            {
                j++;
            }
            else
            {
                swap(nums[j], nums[k]);
                k--;
            }
        }
    }
};
// @lc code=end
