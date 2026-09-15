/*
 * @lc app=leetcode id=2169 lang=cpp
 *
 * [2169] Count Operations to Obtain Zero
 */

// @lc code=start
class Solution
{
public:
    int countOperations(int nums1, int nums2)
    {
        int step = 0;
        while (nums1 != 0 && nums2 != 0)
        {
            if (nums1 >= nums2)
            {
                nums1 -= nums2;
            }
            else
            {
                nums2 -= nums1;
            }
            step++;
        }
        return step;
    }
};
// @lc code=end
