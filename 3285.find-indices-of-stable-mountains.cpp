/*
 * @lc app=leetcode id=3285 lang=cpp
 *
 * [3285] Find Indices of Stable Mountains
 */

// @lc code=start
class Solution
{
public:
    vector<int> stableMountains(vector<int> &height, int threshold)
    {
        vector<int> indices;
        for (int i = 1; i < height.size(); i++)
        {
            if (height[i - 1] > threshold)
            {
                indices.push_back(i);
            }
        }
        return indices;
    }
};
// @lc code=end
