/*
 * @lc app=leetcode id=1401 lang=cpp
 *
 * [1401] Circle and Rectangle Overlapping
 */

// @lc code=start
class Solution
{
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2)
    {
        int closest_x = max(x1, min(xCenter, x2));
        int closest_y = max(y1, min(yCenter, y2));
        int distance_sqr = ((xCenter - closest_x) * (xCenter - closest_x)) + ((yCenter - closest_y) * (yCenter - closest_y));
        return distance_sqr <= (radius * radius);
    }
};
// @lc code=end
