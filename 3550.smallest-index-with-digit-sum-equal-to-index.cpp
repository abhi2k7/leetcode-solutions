/*
 * @lc app=leetcode id=3550 lang=cpp
 *
 * [3550] Smallest Index With Digit Sum Equal to Index
 */

// @lc code=start
class Solution
{
public:
    int smallestIndex(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int temp = nums[i], sm = 0;
            while (temp > 0)
            {
                sm += temp % 10;
                temp /= 10;
            }
            if (sm == i)
            {
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end
