/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> indices(2, -1);
        int st = 0, left = 0, end = nums.size() - 1, right = nums.size() - 1;
        while (st <= end)
        {
            int mid = st + (end - st) / 2;
            if (target > nums[mid])
            {
                st = mid + 1;
            }
            else if (target < nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                indices[0] = mid;
                end = mid - 1;
            }
        }
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (target > nums[mid])
            {
                left = mid + 1;
            }
            else if (target < nums[mid])
            {
                right = mid - 1;
            }
            else
            {
                indices[1] = mid;
                left = mid + 1;
            }
        }
        return indices;
    }
};
// @lc code=end
