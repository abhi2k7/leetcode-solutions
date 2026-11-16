/*
 * @lc app=leetcode id=240 lang=cpp
 *
 * [240] Search a 2D Matrix II
 */

// @lc code=start
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &mat, int target)
    {
        int m = mat.size(), n = mat[0].size();
        int r = 0, c = n - 1;
        while (r < m && c >= 0)
        {
            if (target == mat[r][c])
            {
                return true;
            }
            else if (target < mat[r][c])
            {
                c--;
            }
            else
            {
                r++;
            }
        }
        return false;
    }
};
// @lc code=end
