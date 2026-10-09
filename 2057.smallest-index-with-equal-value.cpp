/*
 * @lc app=leetcode id=2057 lang=cpp
 *
 * [2057] Smallest Index With Equal Value
 */

// @lc code=start
class Solution
{
public:
    int smallestEqual(vector<int> &nums)
    {
        int index = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 10 == nums[i])
            {
                index = i;
                break;
            }
        }
        return index;
    }
};
// @lc code=end
