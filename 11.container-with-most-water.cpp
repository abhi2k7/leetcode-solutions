/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0, right = height.size() - 1, maxWater = 0;
        while (left < right)
        {
            int width = right - left;
            int ht = min(height[left], height[right]);
            int curr_water = width * ht;
            maxWater = max(maxWater, curr_water);
            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxWater;
    }
};
// @lc code=end
