/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int st = 0, end = nums.size() - 1;
        while (st < end)
        {
            int mid = st + (end - st) / 2;
            if (nums[mid] < nums[mid + 1])
            {
                st = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        return st;
    }
};
// @lc code=end
