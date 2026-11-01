/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0, j = i + 1;
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        while (j < n)
        {
            if (nums[i] == nums[j])
            {
                j++;
            }
            else if (nums[i] != nums[j])
            {
                nums[i + 1] = nums[j];
                i++;
                j++;
            }
        }
        return i + 1;
    }
};
// @lc code=end
