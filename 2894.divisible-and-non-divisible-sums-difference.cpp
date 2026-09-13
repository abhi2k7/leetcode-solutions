/*
 * @lc app=leetcode id=2894 lang=cpp
 *
 * [2894] Divisible and Non-divisible Sums Difference
 */

// @lc code=start
class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int nums1 = 0, nums2 = 0;
        for (int i = 0; i <= n; i++)
        {
            if (i % m != 0)
            {
                nums1 += i;
            }
            else if (i % m == 0)
            {
                nums2 += i;
            }
        }
        return nums1 - nums2;
    }
};
// @lc code=end
